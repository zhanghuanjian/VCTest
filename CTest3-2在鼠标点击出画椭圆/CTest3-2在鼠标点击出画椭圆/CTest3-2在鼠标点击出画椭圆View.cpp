
// CTest3-2在鼠标点击出画椭圆View.cpp : CCTest32在鼠标点击出画椭圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest3-2在鼠标点击出画椭圆.h"
#endif

#include "CTest3-2在鼠标点击出画椭圆Doc.h"
#include "CTest3-2在鼠标点击出画椭圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest32在鼠标点击出画椭圆View

IMPLEMENT_DYNCREATE(CCTest32在鼠标点击出画椭圆View, CView)

BEGIN_MESSAGE_MAP(CCTest32在鼠标点击出画椭圆View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest32在鼠标点击出画椭圆View 构造/析构

CCTest32在鼠标点击出画椭圆View::CCTest32在鼠标点击出画椭圆View()
{
	// TODO: 在此处添加构造代码

}

CCTest32在鼠标点击出画椭圆View::~CCTest32在鼠标点击出画椭圆View()
{
}

BOOL CCTest32在鼠标点击出画椭圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest32在鼠标点击出画椭圆View 绘制

void CCTest32在鼠标点击出画椭圆View::OnDraw(CDC* pDC)
{
	CCTest32在鼠标点击出画椭圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->TextOutW(200, 150, _T("左击可随机生成椭圆"));
	for (int i = 0; i < pDoc->cr.GetSize(); i++)
	{
		pDC->Ellipse(pDoc->cr.GetAt(i));
	}

}


// CCTest32在鼠标点击出画椭圆View 诊断

#ifdef _DEBUG
void CCTest32在鼠标点击出画椭圆View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest32在鼠标点击出画椭圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest32在鼠标点击出画椭圆Doc* CCTest32在鼠标点击出画椭圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest32在鼠标点击出画椭圆Doc)));
	return (CCTest32在鼠标点击出画椭圆Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest32在鼠标点击出画椭圆View 消息处理程序


void CCTest32在鼠标点击出画椭圆View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);

	int r = rand() % 50 + 5;
	int r1 = rand() % 50 + 5;
	CRect cr(point.x - r, point.y - r1, point.x + r, point.y + r1);

	CCTest32在鼠标点击出画椭圆Doc* pDoc = GetDocument();
	pDoc->cr.Add(cr);
	this->Invalidate();
}
