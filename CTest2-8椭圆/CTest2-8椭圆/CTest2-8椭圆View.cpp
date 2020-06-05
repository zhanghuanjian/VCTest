
// CTest2-8椭圆View.cpp : CCTest28椭圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest2-8椭圆.h"
#endif

#include "CTest2-8椭圆Doc.h"
#include "CTest2-8椭圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest28椭圆View

IMPLEMENT_DYNCREATE(CCTest28椭圆View, CView)

BEGIN_MESSAGE_MAP(CCTest28椭圆View, CView)
END_MESSAGE_MAP()

// CCTest28椭圆View 构造/析构

CCTest28椭圆View::CCTest28椭圆View()
{
	// TODO: 在此处添加构造代码

}

CCTest28椭圆View::~CCTest28椭圆View()
{
}

BOOL CCTest28椭圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest28椭圆View 绘制

void CCTest28椭圆View::OnDraw(CDC* pDC)
{
	CCTest28椭圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
}


// CCTest28椭圆View 诊断

#ifdef _DEBUG
void CCTest28椭圆View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest28椭圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest28椭圆Doc* CCTest28椭圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest28椭圆Doc)));
	return (CCTest28椭圆Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest28椭圆View 消息处理程序
