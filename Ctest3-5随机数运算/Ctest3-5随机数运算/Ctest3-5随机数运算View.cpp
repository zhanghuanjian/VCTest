
// Ctest3-5随机数运算View.cpp : CCtest35随机数运算View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Ctest3-5随机数运算.h"
#endif

#include "Ctest3-5随机数运算Doc.h"
#include "Ctest3-5随机数运算View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCtest35随机数运算View

IMPLEMENT_DYNCREATE(CCtest35随机数运算View, CView)

BEGIN_MESSAGE_MAP(CCtest35随机数运算View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCtest35随机数运算View 构造/析构

CCtest35随机数运算View::CCtest35随机数运算View()
{
	// TODO: 在此处添加构造代码

}

CCtest35随机数运算View::~CCtest35随机数运算View()
{
}

BOOL CCtest35随机数运算View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCtest35随机数运算View 绘制

void CCtest35随机数运算View::OnDraw(CDC* pDC)
{
	CCtest35随机数运算Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->A);
	pDC->Rectangle(pDoc->B);
	pDC->Rectangle(pDoc->C);

}



// CCtest35随机数运算View 诊断

#ifdef _DEBUG
void CCtest35随机数运算View::AssertValid() const
{
	CView::AssertValid();
}

void CCtest35随机数运算View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCtest35随机数运算Doc* CCtest35随机数运算View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCtest35随机数运算Doc)));
	return (CCtest35随机数运算Doc*)m_pDocument;
}
#endif //_DEBUG


// CCtest35随机数运算View 消息处理程序


void CCtest35随机数运算View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s1, s2, s;

	CCtest35随机数运算Doc* pDoc = GetDocument();

	int x = rand() % 100 + 5;

	CClientDC dc(this);

	if (point.x>50 && point.x<200 && point.y>100 && point.y<400)
	{
		pDoc->a = x;
		s1.Format(_T("%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, s1);
	}
	else if (point.x>250 && point.x<500 && point.y>100 && point.y<400)
	{
		pDoc->b = x;
		s2.Format(_T("%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, s2);
	}
	else if (point.x>550 && point.x<700 && point.y>100 && point.y<400)
	{
		s.Format(_T("%d"), pDoc->a+pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}
	else
	{
		s = "点击无效";
		dc.TextOutW(point.x, point.y, s);

	}

	CView::OnLButtonDown(nFlags, point);

}
