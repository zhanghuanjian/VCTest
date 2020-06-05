
// test1-2输出字符串(文档-视图)View.cpp : Ctest12输出字符串文档视图View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test1-2输出字符串(文档-视图).h"
#endif

#include "test1-2输出字符串(文档-视图)Doc.h"
#include "test1-2输出字符串(文档-视图)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest12输出字符串文档视图View

IMPLEMENT_DYNCREATE(Ctest12输出字符串文档视图View, CView)

BEGIN_MESSAGE_MAP(Ctest12输出字符串文档视图View, CView)
END_MESSAGE_MAP()

// Ctest12输出字符串文档视图View 构造/析构

Ctest12输出字符串文档视图View::Ctest12输出字符串文档视图View()
{
	// TODO: 在此处添加构造代码

}

Ctest12输出字符串文档视图View::~Ctest12输出字符串文档视图View()
{
}

BOOL Ctest12输出字符串文档视图View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest12输出字符串文档视图View 绘制

void Ctest12输出字符串文档视图View::OnDraw(CDC* pDC)
{
	Ctest12输出字符串文档视图Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->TextOutW(200, 250, pDoc->s);

}


// Ctest12输出字符串文档视图View 诊断

#ifdef _DEBUG
void Ctest12输出字符串文档视图View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest12输出字符串文档视图View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest12输出字符串文档视图Doc* Ctest12输出字符串文档视图View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest12输出字符串文档视图Doc)));
	return (Ctest12输出字符串文档视图Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest12输出字符串文档视图View 消息处理程序
