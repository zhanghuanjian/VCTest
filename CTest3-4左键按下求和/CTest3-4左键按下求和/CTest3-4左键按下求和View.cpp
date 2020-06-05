
// CTest3-4左键按下求和View.cpp : CCTest34左键按下求和View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest3-4左键按下求和.h"
#endif

#include "CTest3-4左键按下求和Doc.h"
#include "CTest3-4左键按下求和View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest34左键按下求和View

IMPLEMENT_DYNCREATE(CCTest34左键按下求和View, CView)

BEGIN_MESSAGE_MAP(CCTest34左键按下求和View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest34左键按下求和View 构造/析构

CCTest34左键按下求和View::CCTest34左键按下求和View()
{
	// TODO: 在此处添加构造代码

}

CCTest34左键按下求和View::~CCTest34左键按下求和View()
{
}

BOOL CCTest34左键按下求和View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest34左键按下求和View 绘制

void CCTest34左键按下求和View::OnDraw(CDC* pDC)
{
	CCTest34左键按下求和Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->TextOutW(100, 100, _T("点击左键有惊喜哦!"));

}


// CCTest34左键按下求和View 诊断

#ifdef _DEBUG
void CCTest34左键按下求和View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest34左键按下求和View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest34左键按下求和Doc* CCTest34左键按下求和View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest34左键按下求和Doc)));
	return (CCTest34左键按下求和Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest34左键按下求和View 消息处理程序


void CCTest34左键按下求和View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);

	CCTest34左键按下求和Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("A+B=%d"), pDoc->A + pDoc->B);//从客户区获得A,B值并求和
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);


}
