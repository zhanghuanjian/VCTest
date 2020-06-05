
// Ctest4-1左击移动矩形View.cpp : CCtest41左击移动矩形View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Ctest4-1左击移动矩形.h"
#endif

#include "Ctest4-1左击移动矩形Doc.h"
#include "Ctest4-1左击移动矩形View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCtest41左击移动矩形View

IMPLEMENT_DYNCREATE(CCtest41左击移动矩形View, CView)

BEGIN_MESSAGE_MAP(CCtest41左击移动矩形View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCtest41左击移动矩形View 构造/析构

CCtest41左击移动矩形View::CCtest41左击移动矩形View()
{
	// TODO:  在此处添加构造代码

}

CCtest41左击移动矩形View::~CCtest41左击移动矩形View()
{
}

BOOL CCtest41左击移动矩形View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCtest41左击移动矩形View 绘制

void CCtest41左击移动矩形View::OnDraw(CDC* pDC)
{
	CCtest41左击移动矩形Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->m_tagRec);

}


// CCtest41左击移动矩形View 诊断

#ifdef _DEBUG
void CCtest41左击移动矩形View::AssertValid() const
{
	CView::AssertValid();
}

void CCtest41左击移动矩形View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCtest41左击移动矩形Doc* CCtest41左击移动矩形View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCtest41左击移动矩形Doc)));
	return (CCtest41左击移动矩形Doc*)m_pDocument;
}
#endif //_DEBUG


// CCtest41左击移动矩形View 消息处理程序


void CCtest41左击移动矩形View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  在此添加消息处理程序代码和/或调用默认值

	CCtest41左击移动矩形Doc* pDoc = GetDocument();

	if (nFlags&MK_SHIFT)//鼠标左键按下的同时，shift键是否按下
	{
		pDoc->m_tagRec.left = 30;
		pDoc->m_tagRec.top = 30;
		pDoc->m_tagRec.right = 350;
		pDoc->m_tagRec.bottom = 300;
	}
	else
	{
		pDoc->m_tagRec.left = point.x;
		pDoc->m_tagRec.top =point.y;
		pDoc->m_tagRec.right = point.x + 320;
		pDoc->m_tagRec.bottom = point.y+270;

	}
	InvalidateRect(NULL, TRUE);//强制重绘

	CView::OnLButtonDown(nFlags, point);
}
