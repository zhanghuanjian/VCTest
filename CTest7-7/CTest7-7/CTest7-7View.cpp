
// CTest7-7View.cpp : CCTest77View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest7-7.h"
#endif

#include "CTest7-7Doc.h"
#include "CTest7-7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest77View

IMPLEMENT_DYNCREATE(CCTest77View, CView)

BEGIN_MESSAGE_MAP(CCTest77View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CCTest77View 构造/析构

CCTest77View::CCTest77View()
{
	// TODO: 在此处添加构造代码
	rect.SetRect(30, 30, 300, 300);

}

CCTest77View::~CCTest77View()
{
}

BOOL CCTest77View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest77View 绘制

void CCTest77View::OnDraw(CDC* pDC)
{
	CCTest77Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(rect);
}


// CCTest77View 诊断

#ifdef _DEBUG
void CCTest77View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest77View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest77Doc* CCTest77View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest77Doc)));
	return (CCTest77Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest77View 消息处理程序


void CCTest77View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnMouseMove(nFlags, point);
	if (nFlags)
	{
		rect.top = point.y - 20;
		rect.bottom = point.y + 20;
		rect.left = point.x - 50;
		rect.right = point.x + 50;
		Invalidate();
	}
}
