
// CTest4-4计鼠标移动次数View.cpp : CCTest44计鼠标移动次数View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest4-4计鼠标移动次数.h"
#endif

#include "CTest4-4计鼠标移动次数Doc.h"
#include "CTest4-4计鼠标移动次数View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest44计鼠标移动次数View

IMPLEMENT_DYNCREATE(CCTest44计鼠标移动次数View, CView)

BEGIN_MESSAGE_MAP(CCTest44计鼠标移动次数View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest44计鼠标移动次数View 构造/析构

CCTest44计鼠标移动次数View::CCTest44计鼠标移动次数View()
{
	// TODO: 在此处添加构造代码

}

CCTest44计鼠标移动次数View::~CCTest44计鼠标移动次数View()
{
}

BOOL CCTest44计鼠标移动次数View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest44计鼠标移动次数View 绘制

void CCTest44计鼠标移动次数View::OnDraw(CDC* pDC)
{
	CCTest44计鼠标移动次数Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->TextOutW(20, 20, _T("点击鼠标左键,移动一段距离后释放"));
}


// CCTest44计鼠标移动次数View 诊断

#ifdef _DEBUG
void CCTest44计鼠标移动次数View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest44计鼠标移动次数View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest44计鼠标移动次数Doc* CCTest44计鼠标移动次数View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest44计鼠标移动次数Doc)));
	return (CCTest44计鼠标移动次数Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest44计鼠标移动次数View 消息处理程序


void CCTest44计鼠标移动次数View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);

	if(nFlags)
	{
		s1.Format(_T("MouseMove发生的次数：%d"),count++);
	dc.TextOutW(20, 60, s1);

	}

	CView::OnMouseMove(nFlags, point);
}


void CCTest44计鼠标移动次数View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);

	up_point.x = point.x;

	if (up_point.x > down_point.x)
	{
		xiangsu = up_point .x- down_point.x;

	}
	if (up_point.x ==down_point.x)
	{
		xiangsu =0;

	}
	if (up_point.x < down_point.x)
	{
		xiangsu = down_point.x- up_point.x;

	}
	s2.Format(_T("横向移动%d个像素发生一次"), xiangsu);
	dc.TextOutW(20, 100, s2);

	CView::OnLButtonUp(nFlags, point);
}


void CCTest44计鼠标移动次数View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	down_point.x = point.x;

	CView::OnLButtonDown(nFlags, point);
}
