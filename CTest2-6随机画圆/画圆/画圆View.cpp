
// 画圆View.cpp : C画圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "画圆.h"
#endif

#include "画圆Doc.h"
#include "画圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C画圆View

IMPLEMENT_DYNCREATE(C画圆View, CView)

BEGIN_MESSAGE_MAP(C画圆View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C画圆View 构造/析构

C画圆View::C画圆View()
{
	// TODO: 在此处添加构造代码
	ca.SetSize(256);

}

C画圆View::~C画圆View()
{
}

BOOL C画圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C画圆View 绘制

void C画圆View::OnDraw(CDC* pDC)
{
	C画圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < ca.GetSize(); i++)
	{
		pDC->Ellipse(ca[i]);
	}
}


// C画圆View 诊断

#ifdef _DEBUG
void C画圆View::AssertValid() const
{
	CView::AssertValid();
}

void C画圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C画圆Doc* C画圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C画圆Doc)));
	return (C画圆Doc*)m_pDocument;
}
#endif //_DEBUG


// C画圆View 消息处理程序


void C画圆View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	int r = rand() % 50 + 10;
	CClientDC dc(this);
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	Invalidate();
}
