
// VC20200303Test1View.cpp : CVC20200303Test1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "VC20200303Test1.h"
#endif

#include "VC20200303Test1Doc.h"
#include "VC20200303Test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVC20200303Test1View

IMPLEMENT_DYNCREATE(CVC20200303Test1View, CView)

BEGIN_MESSAGE_MAP(CVC20200303Test1View, CView)
END_MESSAGE_MAP()

// CVC20200303Test1View 构造/析构

CVC20200303Test1View::CVC20200303Test1View()
{
	// TODO: 在此处添加构造代码

}

CVC20200303Test1View::~CVC20200303Test1View()
{
}

BOOL CVC20200303Test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CVC20200303Test1View 绘制

void CVC20200303Test1View::OnDraw(CDC* pDC)
{
	CVC20200303Test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s, A;
	int a = 45;
	s = "我是张焕建!";
	//S.Format(_T("%d"), s);
	A.Format(_T("%d"), a);
	pDC->TextOutW(200,200,s);
	pDC->TextOutW(300, 300, A);

}


// CVC20200303Test1View 诊断

#ifdef _DEBUG
void CVC20200303Test1View::AssertValid() const
{
	CView::AssertValid();
}

void CVC20200303Test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVC20200303Test1Doc* CVC20200303Test1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVC20200303Test1Doc)));
	return (CVC20200303Test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CVC20200303Test1View 消息处理程序
