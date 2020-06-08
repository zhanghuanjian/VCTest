
// CTest14-综4View.cpp : CCTest14综4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest14-综4.h"
#endif

#include "CTest14-综4Set.h"
#include "CTest14-综4Doc.h"
#include "CTest14-综4View.h"
#include"MyDlg.h"

#include "targetver.h"

#include"Search_Dlg.h"
#include"Sort_Dlg.h"
#include"Traversal_Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest14综4View

IMPLEMENT_DYNCREATE(CCTest14综4View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest14综4View, CRecordView)
	ON_COMMAND(ID_SEARCH, &CCTest14综4View::OnSearch)
	ON_COMMAND(ID_SORT, &CCTest14综4View::OnSort)
	ON_COMMAND(ID_TRAVERSAL, &CCTest14综4View::OnTraversal)
END_MESSAGE_MAP()

// CCTest14综4View 构造/析构

CCTest14综4View::CCTest14综4View()
	: CRecordView(IDD_CTEST144_FORM)
	, a(_T(""))
	, b(_T(""))
	, c(_T(""))
	, d(_T(""))
	, e(_T(""))
	, f(_T(""))
	, g(_T(""))
	, h(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CCTest14综4View::~CCTest14综4View()
{
}

void CCTest14综4View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
	DDX_Text(pDX, IDC_EDIT8, m_pSet->column8);
}

BOOL CCTest14综4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CCTest14综4View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest14综4Set;
	CRecordView::OnInitialUpdate();

}


// CCTest14综4View 诊断

#ifdef _DEBUG
void CCTest14综4View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest14综4View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest14综4Doc* CCTest14综4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest14综4Doc)));
	return (CCTest14综4Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest14综4View 数据库支持
CRecordset* CCTest14综4View::OnGetRecordset()
{
	return m_pSet;
}



// CCTest14综4View 消息处理程序


void CCTest14综4View::OnSearch()
{
	// TODO: 在此添加命令处理程序代码
	Search_Dlg re_dlg;
	int t = re_dlg.DoModal();
	if (t == IDOK)
	{

		m_pSet->m_strFilter.Format(_T("%s"), re_dlg.search);
		m_pSet->Requery();
		UpdateData(false);
	}
}


void CCTest14综4View::OnSort()
{
	// TODO: 在此添加命令处理程序代码
	Search_Dlg re_dlg;
	int t = re_dlg.DoModal();
	if (t == IDOK)
	{

		m_pSet->m_strFilter.Format(_T("%s"), re_dlg.search);
		m_pSet->Requery();
		UpdateData(false);
	}
}


void CCTest14综4View::OnTraversal()
{
	// TODO: 在此添加命令处理程序代码
	Traversal_Dlg dlg;
	int n, i;
	CString str, s;

	m_pSet->MoveFirst();
	while (!m_pSet->IsEOF())

	{
		n = m_pSet->GetODBCFieldCount();


		for (i = 1; i < n; i++)
		{
			m_pSet->GetFieldValue((short)i, str);
			s += _T(" ") + str;
		}
		s += _T("\r\n");
		dlg.trav = s;
		UpdateData(false);
		m_pSet->MoveNext();
	}
	if (dlg.DoModal() == IDOK)
	{

	}
}
