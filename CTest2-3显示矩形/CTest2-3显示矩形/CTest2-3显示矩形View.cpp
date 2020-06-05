
// CTest2-3显示矩形View.cpp : CCTest23显示矩形View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest2-3显示矩形.h"
#endif

#include "CTest2-3显示矩形Doc.h"
#include "CTest2-3显示矩形View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest23显示矩形View

IMPLEMENT_DYNCREATE(CCTest23显示矩形View, CView)

BEGIN_MESSAGE_MAP(CCTest23显示矩形View, CView)
END_MESSAGE_MAP()

// CCTest23显示矩形View 构造/析构

CCTest23显示矩形View::CCTest23显示矩形View()
{
	// TODO: 在此处添加构造代码

}

CCTest23显示矩形View::~CCTest23显示矩形View()
{
}

BOOL CCTest23显示矩形View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest23显示矩形View 绘制

void CCTest23显示矩形View::OnDraw(CDC* pDC)
{
	CCTest23显示矩形Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect rect(30, 30, 300, 300);//构造了一个矩形,它的位置是(左上角;右下角)
	pDC->Rectangle(&rect);
}


// CCTest23显示矩形View 诊断

#ifdef _DEBUG
void CCTest23显示矩形View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest23显示矩形View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest23显示矩形Doc* CCTest23显示矩形View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest23显示矩形Doc)));
	return (CCTest23显示矩形Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest23显示矩形View 消息处理程序
