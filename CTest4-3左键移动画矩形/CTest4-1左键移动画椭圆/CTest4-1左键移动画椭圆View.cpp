
// CTest4-1左键移动画椭圆View.cpp : CCTest41左键移动画椭圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest4-1左键移动画椭圆.h"
#endif

#include "CTest4-1左键移动画椭圆Doc.h"
#include "CTest4-1左键移动画椭圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest41左键移动画椭圆View

IMPLEMENT_DYNCREATE(CCTest41左键移动画椭圆View, CView)

BEGIN_MESSAGE_MAP(CCTest41左键移动画椭圆View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CCTest41左键移动画椭圆View 构造/析构

CCTest41左键移动画椭圆View::CCTest41左键移动画椭圆View()
{
	// TODO: 在此处添加构造代码

}

CCTest41左键移动画椭圆View::~CCTest41左键移动画椭圆View()
{
}

BOOL CCTest41左键移动画椭圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest41左键移动画椭圆View 绘制

void CCTest41左键移动画椭圆View::OnDraw(CDC* pDC)
{
	CCTest41左键移动画椭圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->TextOutW(10, 10, _T("左键按下，记录鼠标移动位置并于客户区显示,抬起画出一个矩形，以按下,抬起的点为其的两对角。"));
	pDC->Rectangle(pDoc->m_tagRec);
}


// CCTest41左键移动画椭圆View 诊断

#ifdef _DEBUG
void CCTest41左键移动画椭圆View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest41左键移动画椭圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest41左键移动画椭圆Doc* CCTest41左键移动画椭圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest41左键移动画椭圆Doc)));
	return (CCTest41左键移动画椭圆Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest41左键移动画椭圆View 消息处理程序


void CCTest41左键移动画椭圆View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	CCTest41左键移动画椭圆Doc* pDoc = GetDocument();
	pDoc->m_tagRec.left = point.x;
	pDoc->m_tagRec.top = point.y;
	InvalidateRect(NULL, TRUE);
}


void CCTest41左键移动画椭圆View::OnRButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnRButtonUp(nFlags, point);
	CCTest41左键移动画椭圆Doc* pDoc = GetDocument();
	pDoc->m_tagRec.right = point.x;
	pDoc->m_tagRec.bottom = point.y;
	InvalidateRect(NULL, TRUE);
}


void CCTest41左键移动画椭圆View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnMouseMove(nFlags, point);
	CString s;
	s.Format(_T("%d ,%d"), point.x, point.y);
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);  //实时记录左键位置
}
