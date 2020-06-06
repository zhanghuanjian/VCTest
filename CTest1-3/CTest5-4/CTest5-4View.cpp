
// CTest5-4View.cpp : CCTest54View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest5-4.h"
#endif

#include "CTest5-4Doc.h"
#include "CTest5-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest54View

IMPLEMENT_DYNCREATE(CCTest54View, CView)

BEGIN_MESSAGE_MAP(CCTest54View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest54View 构造/析构

CCTest54View::CCTest54View()
{
	// TODO: 在此处添加构造代码

}

CCTest54View::~CCTest54View()
{
}

BOOL CCTest54View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest54View 绘制

void CCTest54View::OnDraw(CDC* /*pDC*/)
{
	CCTest54Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest54View 诊断

#ifdef _DEBUG
void CCTest54View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest54View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest54Doc* CCTest54View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest54Doc)));
	return (CCTest54Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest54View 消息处理程序


void CCTest54View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	int r = nFlags;
	if (r == IDOK)
	{
		dc.TextOutW(200, 200, _T("张焕建"));
	}

	CView::OnLButtonDown(nFlags, point);
}
