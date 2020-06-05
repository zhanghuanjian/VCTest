
// CTest2-11右击显示左键点击数View.cpp : CCTest211右击显示左键点击数View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest2-11右击显示左键点击数.h"
#endif

#include "CTest2-11右击显示左键点击数Doc.h"
#include "CTest2-11右击显示左键点击数View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest211右击显示左键点击数View

IMPLEMENT_DYNCREATE(CCTest211右击显示左键点击数View, CView)

BEGIN_MESSAGE_MAP(CCTest211右击显示左键点击数View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest211右击显示左键点击数View 构造/析构

CCTest211右击显示左键点击数View::CCTest211右击显示左键点击数View()
{
	// TODO: 在此处添加构造代码

}

CCTest211右击显示左键点击数View::~CCTest211右击显示左键点击数View()
{
}

BOOL CCTest211右击显示左键点击数View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest211右击显示左键点击数View 绘制

void CCTest211右击显示左键点击数View::OnDraw(CDC* /*pDC*/)
{
	CCTest211右击显示左键点击数Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest211右击显示左键点击数View 诊断

#ifdef _DEBUG
void CCTest211右击显示左键点击数View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest211右击显示左键点击数View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest211右击显示左键点击数Doc* CCTest211右击显示左键点击数View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest211右击显示左键点击数Doc)));
	return (CCTest211右击显示左键点击数Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest211右击显示左键点击数View 消息处理程序


void CCTest211右击显示左键点击数View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	CCTest211右击显示左键点击数Doc* pDoc = GetDocument();
	s.Format(_T("%d"), pDoc->count++);
}


void CCTest211右击显示左键点击数View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnRButtonDown(nFlags, point);
	CClientDC dc(this);
	dc.TextOutW(200, 150, s);
}
