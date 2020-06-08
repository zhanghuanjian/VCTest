
// CTest12-2综合实验1View.cpp : CCTest122综合实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest12-2综合实验1.h"
#endif

#include "CTest12-2综合实验1Set.h"
#include "CTest12-2综合实验1Doc.h"
#include "CTest12-2综合实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest122综合实验1View

IMPLEMENT_DYNCREATE(CCTest122综合实验1View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest122综合实验1View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CCTest122综合实验1View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CCTest122综合实验1View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CCTest122综合实验1View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CCTest122综合实验1View::OnRecordLast)
END_MESSAGE_MAP()

// CCTest122综合实验1View 构造/析构

CCTest122综合实验1View::CCTest122综合实验1View()
	: CRecordView(IDD_CTEST1221_FORM)
	, i(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	path = _T("D:\\MFC数据库\\综合实验1-相片");

}

CCTest122综合实验1View::~CCTest122综合实验1View()
{
}

void CCTest122综合实验1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_STATIC, m_pSet->m_1);
}

BOOL CCTest122综合实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CCTest122综合实验1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest122综合实验1Set;
	CRecordView::OnInitialUpdate();

}


// CCTest122综合实验1View 诊断

#ifdef _DEBUG
void CCTest122综合实验1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest122综合实验1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest122综合实验1Doc* CCTest122综合实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest122综合实验1Doc)));
	return (CCTest122综合实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest122综合实验1View 数据库支持
CRecordset* CCTest122综合实验1View::OnGetRecordset()
{
	return m_pSet;
}



// CCTest122综合实验1View 消息处理程序


void CCTest122综合实验1View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);

	CString filename, s;
	GetDlgItemText(IDC_STATIC, s);
	filename = path + s;
	draw_pic(filename);

}


void CCTest122综合实验1View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);

	/*CString filename, s;
	GetDlgItemText(IDC_STATIC, s);
	filename = path + s;
	draw_pic(filename);*/

}


void CCTest122综合实验1View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if(m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);

	/*CString filename, s;
	GetDlgItemText(IDC_STATIC, s);
	filename = path + s;
	draw_pic(filename);*/


}


void CCTest122综合实验1View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);

	/*CString filename, s;
	GetDlgItemText(IDC_STATIC, s);
	filename = path + s;
	draw_pic(filename);*/

}

void CCTest122综合实验1View::draw_pic(CString file)
{
	CImage img;
	img.Load(file);
	CDC* pDC = GetDlgItem(IDD_CTEST1221_FORM)->GetDC();
	CClientDC dc(this);
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDD_CTEST1221_FORM)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;

	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(dc.m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
	Invalidate();

	}