
// CT14-综5View.cpp : CCT14综5View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CT14-综5.h"
#endif

#include "CT14-综5Set.h"
#include "CT14-综5Doc.h"
#include "CT14-综5View.h"
#include"MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCT14综5View

IMPLEMENT_DYNCREATE(CCT14综5View, CRecordView)

BEGIN_MESSAGE_MAP(CCT14综5View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CCT14综5View::OnRecordFirst)
	ON_BN_CLICKED(IDC_BUTTON1, &CCT14综5View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CCT14综5View 构造/析构

CCT14综5View::CCT14综5View()
	: CRecordView(IDD_CT145_FORM)
	, m_jpg(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CCT14综5View::~CCT14综5View()
{
}

void CCT14综5View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column8);
}

BOOL CCT14综5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CCT14综5View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CT14综5Set;
	CRecordView::OnInitialUpdate();

}


// CCT14综5View 诊断

#ifdef _DEBUG
void CCT14综5View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCT14综5View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCT14综5Doc* CCT14综5View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCT14综5Doc)));
	return (CCT14综5Doc*)m_pDocument;
}
#endif //_DEBUG


// CCT14综5View 数据库支持
CRecordset* CCT14综5View::OnGetRecordset()
{
	return m_pSet;
}



// CCT14综5View 消息处理程序



void CCT14综5View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	
}


void CCT14综5View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

}
