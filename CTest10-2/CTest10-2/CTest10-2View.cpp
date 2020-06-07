
// CTest10-2View.cpp : CCTest102View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest10-2.h"
#endif

#include "CTest10-2Doc.h"
#include "CTest10-2View.h"
#include"fac.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest102View

IMPLEMENT_DYNCREATE(CCTest102View, CView)

BEGIN_MESSAGE_MAP(CCTest102View, CView)
END_MESSAGE_MAP()

// CCTest102View 构造/析构

CCTest102View::CCTest102View()
{
	// TODO: 在此处添加构造代码

}

CCTest102View::~CCTest102View()
{
}

BOOL CCTest102View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest102View 绘制

void CCTest102View::OnDraw(CDC* pDC)
{
	CCTest102Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	int n = 5;
	int a = Factorial(5);
	if (a == 0)
	{
		pDC->TextOutW(200, 180, _T("n的值必须大于0"));
	}
	if (a == -1)
	{
		pDC->TextOutW(200, 180, _T("n的阶乘结果溢出"));
	}
	if (a != 0 && a != -1)
	{
		s.Format(_T("%d的阶乘为%d"), n, a);
		pDC->TextOutW(200, 100, s);
	}
}


// CCTest102View 诊断

#ifdef _DEBUG
void CCTest102View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest102View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest102Doc* CCTest102View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest102Doc)));
	return (CCTest102Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest102View 消息处理程序
