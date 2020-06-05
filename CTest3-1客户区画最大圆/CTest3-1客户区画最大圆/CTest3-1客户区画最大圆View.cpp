
// CTest3-1客户区画最大圆View.cpp : CCTest31客户区画最大圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest3-1客户区画最大圆.h"
#endif

#include "CTest3-1客户区画最大圆Doc.h"
#include "CTest3-1客户区画最大圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest31客户区画最大圆View

IMPLEMENT_DYNCREATE(CCTest31客户区画最大圆View, CView)

BEGIN_MESSAGE_MAP(CCTest31客户区画最大圆View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest31客户区画最大圆View 构造/析构

CCTest31客户区画最大圆View::CCTest31客户区画最大圆View()
{
	// TODO: 在此处添加构造代码

}

CCTest31客户区画最大圆View::~CCTest31客户区画最大圆View()
{
}

BOOL CCTest31客户区画最大圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest31客户区画最大圆View 绘制

void CCTest31客户区画最大圆View::OnDraw(CDC* pDC)
{
	CCTest31客户区画最大圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect ca;
	this->GetClientRect(&ca);
	pDC->Ellipse(ca);
}


// CCTest31客户区画最大圆View 诊断

#ifdef _DEBUG
void CCTest31客户区画最大圆View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest31客户区画最大圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest31客户区画最大圆Doc* CCTest31客户区画最大圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest31客户区画最大圆Doc)));
	return (CCTest31客户区画最大圆Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest31客户区画最大圆View 消息处理程序


void CCTest31客户区画最大圆View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	CRect ca;
	this->GetClientRect(&ca);//获取客户区信息
}
