
// CTest2-7重绘再现随机圆View.cpp : CCTest27重绘再现随机圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest2-7重绘再现随机圆.h"
#endif

#include "CTest2-7重绘再现随机圆Doc.h"
#include "CTest2-7重绘再现随机圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest27重绘再现随机圆View

IMPLEMENT_DYNCREATE(CCTest27重绘再现随机圆View, CView)

BEGIN_MESSAGE_MAP(CCTest27重绘再现随机圆View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest27重绘再现随机圆View 构造/析构

CCTest27重绘再现随机圆View::CCTest27重绘再现随机圆View()
{
	// TODO: 在此处添加构造代码

}

CCTest27重绘再现随机圆View::~CCTest27重绘再现随机圆View()
{
}

BOOL CCTest27重绘再现随机圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest27重绘再现随机圆View 绘制

void CCTest27重绘再现随机圆View::OnDraw(CDC* pDC)
{
	CCTest27重绘再现随机圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < ca.GetSize(); i++)
	{
		pDC->Ellipse(ca[i]);
	}
}


// CCTest27重绘再现随机圆View 诊断

#ifdef _DEBUG
void CCTest27重绘再现随机圆View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest27重绘再现随机圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest27重绘再现随机圆Doc* CCTest27重绘再现随机圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest27重绘再现随机圆Doc)));
	return (CCTest27重绘再现随机圆Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest27重绘再现随机圆View 消息处理程序


void CCTest27重绘再现随机圆View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	CView::OnLButtonDown(nFlags, point);
	int r = rand() % 50 + 10;
	CClientDC dc(this);
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	Invalidate();//强制重绘
}
