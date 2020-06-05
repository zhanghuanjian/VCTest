
// CTest4-2检测鼠标移动消息View.cpp : CCTest42检测鼠标移动消息View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest4-2检测鼠标移动消息.h"
#endif

#include "CTest4-2检测鼠标移动消息Doc.h"
#include "CTest4-2检测鼠标移动消息View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest42检测鼠标移动消息View

IMPLEMENT_DYNCREATE(CCTest42检测鼠标移动消息View, CView)

BEGIN_MESSAGE_MAP(CCTest42检测鼠标移动消息View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CCTest42检测鼠标移动消息View 构造/析构

CCTest42检测鼠标移动消息View::CCTest42检测鼠标移动消息View()
{
	// TODO:  在此处添加构造代码

}

CCTest42检测鼠标移动消息View::~CCTest42检测鼠标移动消息View()
{
}

BOOL CCTest42检测鼠标移动消息View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest42检测鼠标移动消息View 绘制

void CCTest42检测鼠标移动消息View::OnDraw(CDC* pDC)
{
	CCTest42检测鼠标移动消息Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码

	CPoint point(30, 30);
	pDC->MoveTo(point);
	pDC->LineTo(pDoc->m_point);
}


// CCTest42检测鼠标移动消息View 诊断

#ifdef _DEBUG
void CCTest42检测鼠标移动消息View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest42检测鼠标移动消息View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest42检测鼠标移动消息Doc* CCTest42检测鼠标移动消息View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest42检测鼠标移动消息Doc)));
	return (CCTest42检测鼠标移动消息Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest42检测鼠标移动消息View 消息处理程序


void CCTest42检测鼠标移动消息View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CCTest42检测鼠标移动消息Doc* pDoc = GetDocument();
	pDoc->m_point = point;
	InvalidateRect(NULL, FALSE);


	CView::OnMouseMove(nFlags, point);
}
