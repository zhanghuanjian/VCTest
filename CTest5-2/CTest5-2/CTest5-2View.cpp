
// CTest5-2View.cpp : CCTest52View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest5-2.h"
#endif

#include "CTest5-2Doc.h"
#include "CTest5-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest52View

IMPLEMENT_DYNCREATE(CCTest52View, CView)

BEGIN_MESSAGE_MAP(CCTest52View, CView)
	ON_COMMAND(ID_SHOWNUMBER, &CCTest52View::OnShownumber)
END_MESSAGE_MAP()

// CCTest52View 构造/析构

CCTest52View::CCTest52View()
{
	// TODO: 在此处添加构造代码

}

CCTest52View::~CCTest52View()
{
}

BOOL CCTest52View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest52View 绘制

void CCTest52View::OnDraw(CDC* /*pDC*/)
{
	CCTest52Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest52View 诊断

#ifdef _DEBUG
void CCTest52View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest52View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest52Doc* CCTest52View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest52Doc)));
	return (CCTest52Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest52View 消息处理程序


void CCTest52View::OnShownumber()
{
	// TODO: 在此添加命令处理程序代码
	CString s = _T("201812300045");
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);

}
