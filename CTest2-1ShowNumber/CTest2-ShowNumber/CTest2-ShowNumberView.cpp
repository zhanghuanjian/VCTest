
// CTest2-ShowNumberView.cpp : CCTest2ShowNumberView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest2-ShowNumber.h"
#endif

#include "CTest2-ShowNumberDoc.h"
#include "CTest2-ShowNumberView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest2ShowNumberView

IMPLEMENT_DYNCREATE(CCTest2ShowNumberView, CView)

BEGIN_MESSAGE_MAP(CCTest2ShowNumberView, CView)
END_MESSAGE_MAP()

// CCTest2ShowNumberView 构造/析构

CCTest2ShowNumberView::CCTest2ShowNumberView()
{
	// TODO: 在此处添加构造代码

}

CCTest2ShowNumberView::~CCTest2ShowNumberView()
{
}

BOOL CCTest2ShowNumberView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest2ShowNumberView 绘制

void CCTest2ShowNumberView::OnDraw(CDC* pDC)
{
	CCTest2ShowNumberDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	int b = pDoc->a;
	CString s;
	s.Format(_T("%d"),b);
	pDC->TextOutW(100, 200, s);
}


// CCTest2ShowNumberView 诊断

#ifdef _DEBUG
void CCTest2ShowNumberView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest2ShowNumberView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest2ShowNumberDoc* CCTest2ShowNumberView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest2ShowNumberDoc)));
	return (CCTest2ShowNumberDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest2ShowNumberView 消息处理程序
