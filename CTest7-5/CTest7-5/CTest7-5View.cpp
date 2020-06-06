
// CTest7-5View.cpp : CCTest75View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest7-5.h"
#endif

#include "CTest7-5Doc.h"
#include "CTest7-5View.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest75View

IMPLEMENT_DYNCREATE(CCTest75View, CView)

BEGIN_MESSAGE_MAP(CCTest75View, CView)
	ON_COMMAND(ID_POPOUT, &CCTest75View::OnPopout)
END_MESSAGE_MAP()

// CCTest75View 构造/析构

CCTest75View::CCTest75View()
{
	// TODO: 在此处添加构造代码

}

CCTest75View::~CCTest75View()
{
}

BOOL CCTest75View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest75View 绘制

void CCTest75View::OnDraw(CDC* /*pDC*/)
{
	CCTest75Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest75View 诊断

#ifdef _DEBUG
void CCTest75View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest75View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest75Doc* CCTest75View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest75Doc)));
	return (CCTest75Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest75View 消息处理程序


void CCTest75View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	CString s = _T("你已退出对话框!");
	MyDlg0 dlg;
	int r = dlg.DoModal();
	
	CClientDC dc(this);

	if (r == IDOK)
	{
		dc.TextOutW(200, 100, s);
	}

}
