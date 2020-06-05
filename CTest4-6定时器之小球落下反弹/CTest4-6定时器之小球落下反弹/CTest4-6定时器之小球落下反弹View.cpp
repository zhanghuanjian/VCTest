
// CTest4-6定时器之小球落下反弹View.cpp : CCTest46定时器之小球落下反弹View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest4-6定时器之小球落下反弹.h"
#endif

#include "CTest4-6定时器之小球落下反弹Doc.h"
#include "CTest4-6定时器之小球落下反弹View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest46定时器之小球落下反弹View

IMPLEMENT_DYNCREATE(CCTest46定时器之小球落下反弹View, CView)

BEGIN_MESSAGE_MAP(CCTest46定时器之小球落下反弹View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CCTest46定时器之小球落下反弹View 构造/析构

CCTest46定时器之小球落下反弹View::CCTest46定时器之小球落下反弹View()
{
	// TODO: 在此处添加构造代码
	set = true;
	N = 5;
	for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);

	}

}

CCTest46定时器之小球落下反弹View::~CCTest46定时器之小球落下反弹View()
{
}

BOOL CCTest46定时器之小球落下反弹View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest46定时器之小球落下反弹View 绘制

void CCTest46定时器之小球落下反弹View::OnDraw(CDC* pDC)
{
	CCTest46定时器之小球落下反弹Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	if (set)
	{
		for (int i = 0; i < N; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
			set = false;//set开关作用
		}
	}
	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < N; i++)
	{
		pDC->Ellipse(cr[i]);
	}
}


// CCTest46定时器之小球落下反弹View 诊断

#ifdef _DEBUG
void CCTest46定时器之小球落下反弹View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest46定时器之小球落下反弹View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest46定时器之小球落下反弹Doc* CCTest46定时器之小球落下反弹View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest46定时器之小球落下反弹Doc)));
	return (CCTest46定时器之小球落下反弹Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest46定时器之小球落下反弹View 消息处理程序


void CCTest46定时器之小球落下反弹View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	GetClientRect(&rect);

	CView::OnTimer(nIDEvent);

	int i = nIDEvent;
	if (cr[i].bottom < rect.bottom - 20)
	{
		cr[i].top += 20;
		cr[i].bottom += 20;
	}
	else
	{
		cr[i].top -= 40;
		cr[i].bottom-= 40;
	}
	Invalidate();
}
