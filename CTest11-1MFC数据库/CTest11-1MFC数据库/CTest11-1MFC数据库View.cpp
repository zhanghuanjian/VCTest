
// CTest11-1MFC数据库View.cpp : CCTest111MFC数据库View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest11-1MFC数据库.h"
#endif

#include "CTest11-1MFC数据库Set.h"
#include "CTest11-1MFC数据库Doc.h"
#include "CTest11-1MFC数据库View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest111MFC数据库View

IMPLEMENT_DYNCREATE(CCTest111MFC数据库View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest111MFC数据库View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT2, &CCTest111MFC数据库View::OnEnChangeEdit2)
END_MESSAGE_MAP()

// CCTest111MFC数据库View 构造/析构

CCTest111MFC数据库View::CCTest111MFC数据库View()
	: CRecordView(IDD_CTEST111MFC_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phoneNum(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CCTest111MFC数据库View::~CCTest111MFC数据库View()
{
}

void CCTest111MFC数据库View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);
}

BOOL CCTest111MFC数据库View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CCTest111MFC数据库View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest111MFC数据库Set;
	CRecordView::OnInitialUpdate();

}


// CCTest111MFC数据库View 诊断

#ifdef _DEBUG
void CCTest111MFC数据库View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest111MFC数据库View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest111MFC数据库Doc* CCTest111MFC数据库View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest111MFC数据库Doc)));
	return (CCTest111MFC数据库Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest111MFC数据库View 数据库支持
CRecordset* CCTest111MFC数据库View::OnGetRecordset()
{
	return m_pSet;
}



// CCTest111MFC数据库View 消息处理程序


void CCTest111MFC数据库View::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
