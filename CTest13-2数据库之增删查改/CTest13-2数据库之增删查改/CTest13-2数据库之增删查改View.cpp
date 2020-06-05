
// CTest13-2数据库之增删查改View.cpp : CCTest132数据库之增删查改View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest13-2数据库之增删查改.h"
#include"ADD_DLG.h"
#include "REVISE.h"
#endif

#include "CTest13-2数据库之增删查改Set.h"
#include "CTest13-2数据库之增删查改Doc.h"
#include "CTest13-2数据库之增删查改View.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest132数据库之增删查改View

IMPLEMENT_DYNCREATE(CCTest132数据库之增删查改View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest132数据库之增删查改View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &CCTest132数据库之增删查改View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &CCTest132数据库之增删查改View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CCTest132数据库之增删查改View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON2, &CCTest132数据库之增删查改View::OnBnClickedButton2)
END_MESSAGE_MAP()

// CCTest132数据库之增删查改View 构造/析构

CCTest132数据库之增删查改View::CCTest132数据库之增删查改View()
	: CRecordView(IDD_CTEST132_FORM)
	, number(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CCTest132数据库之增删查改View::~CCTest132数据库之增删查改View()
{
}

void CCTest132数据库之增删查改View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL CCTest132数据库之增删查改View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CCTest132数据库之增删查改View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest132数据库之增删查改Set;
	CRecordView::OnInitialUpdate();

}


// CCTest132数据库之增删查改View 诊断

#ifdef _DEBUG
void CCTest132数据库之增删查改View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest132数据库之增删查改View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest132数据库之增删查改Doc* CCTest132数据库之增删查改View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest132数据库之增删查改Doc)));
	return (CCTest132数据库之增删查改Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest132数据库之增删查改View 数据库支持
CRecordset* CCTest132数据库之增删查改View::OnGetRecordset()
{
	return m_pSet;
}



// CCTest132数据库之增删查改View 消息处理程序


void CCTest132数据库之增删查改View::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);

}


void CCTest132数据库之增删查改View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	ADD_DLG adddlg;
	int r = adddlg.DoModal();
	if (r == IDOK)
	{
		long ii = adddlg.i;
		m_pSet->AddNew();
		m_pSet->m_1 = ii;
		m_pSet->Update();
		UpdateData(false);
	}
}



void CCTest132数据库之增删查改View::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	REVISE revisedlg;
	int r = revisedlg.DoModal();
	if (r == IDOK)
	{
		long xx = revisedlg.j;
		m_pSet->Edit();
		   //revisedlg.j = GetBValue( m_pSet->m_1);
		  //long xx = revisedlg.j;
		m_pSet->m_1 = xx;
		m_pSet->Update();
		UpdateData(false);

	}

}
