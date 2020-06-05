
// CTest3-3鼠标状态View.cpp : CCTest33鼠标状态View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest3-3鼠标状态.h"
#endif

#include "CTest3-3鼠标状态Doc.h"
#include "CTest3-3鼠标状态View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest33鼠标状态View

IMPLEMENT_DYNCREATE(CCTest33鼠标状态View, CView)

BEGIN_MESSAGE_MAP(CCTest33鼠标状态View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CCTest33鼠标状态View 构造/析构

CCTest33鼠标状态View::CCTest33鼠标状态View()
{
	// TODO: 在此处添加构造代码

}

CCTest33鼠标状态View::~CCTest33鼠标状态View()
{
}

BOOL CCTest33鼠标状态View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest33鼠标状态View 绘制

void CCTest33鼠标状态View::OnDraw(CDC* pDC)
{
	CCTest33鼠标状态Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->TextOutW(20, 20,_T( "鼠标左键的实时状态"));
}


// CCTest33鼠标状态View 诊断

#ifdef _DEBUG
void CCTest33鼠标状态View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest33鼠标状态View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest33鼠标状态Doc* CCTest33鼠标状态View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest33鼠标状态Doc)));
	return (CCTest33鼠标状态Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest33鼠标状态View 消息处理程序


void CCTest33鼠标状态View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	CString s1 = _T("左键正被按下");
	CClientDC dc(this);
	dc.TextOutW(200, 150, s1);
}


void CCTest33鼠标状态View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonUp(nFlags, point);
	CString s2 = _T("左键正在抬起");
	CClientDC dc(this);
	dc.TextOutW(200, 180, s2);
}
