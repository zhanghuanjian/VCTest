
// test1-1客户区输出字符串(OnDraw)View.cpp : Ctest11客户区输出字符串OnDrawView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test1-1客户区输出字符串(OnDraw).h"
#endif

#include "test1-1客户区输出字符串(OnDraw)Doc.h"
#include "test1-1客户区输出字符串(OnDraw)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest11客户区输出字符串OnDrawView

IMPLEMENT_DYNCREATE(Ctest11客户区输出字符串OnDrawView, CView)

BEGIN_MESSAGE_MAP(Ctest11客户区输出字符串OnDrawView, CView)
END_MESSAGE_MAP()

// Ctest11客户区输出字符串OnDrawView 构造/析构

Ctest11客户区输出字符串OnDrawView::Ctest11客户区输出字符串OnDrawView()
{
	// TODO: 在此处添加构造代码

}

Ctest11客户区输出字符串OnDrawView::~Ctest11客户区输出字符串OnDrawView()
{
}

BOOL Ctest11客户区输出字符串OnDrawView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest11客户区输出字符串OnDrawView 绘制

void Ctest11客户区输出字符串OnDrawView::OnDraw(CDC* pDC)
{
	Ctest11客户区输出字符串OnDrawDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s = _T("Hello World!");
	pDC->TextOutW(200, 200, s);

}


// Ctest11客户区输出字符串OnDrawView 诊断

#ifdef _DEBUG
void Ctest11客户区输出字符串OnDrawView::AssertValid() const
{
	CView::AssertValid();
}

void Ctest11客户区输出字符串OnDrawView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest11客户区输出字符串OnDrawDoc* Ctest11客户区输出字符串OnDrawView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest11客户区输出字符串OnDrawDoc)));
	return (Ctest11客户区输出字符串OnDrawDoc*)m_pDocument;
}
#endif //_DEBUG


// Ctest11客户区输出字符串OnDrawView 消息处理程序
