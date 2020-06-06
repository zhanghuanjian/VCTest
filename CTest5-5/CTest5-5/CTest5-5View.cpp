
// CTest5-5View.cpp : CCTest55View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest5-5.h"
#endif

#include "CTest5-5Doc.h"
#include "CTest5-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest55View

IMPLEMENT_DYNCREATE(CCTest55View, CView)

BEGIN_MESSAGE_MAP(CCTest55View, CView)
	ON_COMMAND(ID_LINE, &CCTest55View::OnLine)
	ON_COMMAND(ID_RECTANGLE, &CCTest55View::OnRectangle)
	ON_COMMAND(ID_ELLIPSE, &CCTest55View::OnEllipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CCTest55View 构造/析构

CCTest55View::CCTest55View()
{
	// TODO: 在此处添加构造代码

}

CCTest55View::~CCTest55View()
{
}

BOOL CCTest55View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest55View 绘制

void CCTest55View::OnDraw(CDC* /*pDC*/)
{
	CCTest55Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest55View 诊断

#ifdef _DEBUG
void CCTest55View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest55View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest55Doc* CCTest55View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest55Doc)));
	return (CCTest55Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest55View 消息处理程序


void CCTest55View::OnLine()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	set = 1;
	CPen pen(PS_SOLID, 5, RGB(0, 0, 0));
	CPen* oldPen = dc.SelectObject(&pen);
}


void CCTest55View::OnRectangle()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	set = 2;
	GetClientRect(&m_Crect);
}


void CCTest55View::OnEllipse()
{
	// TODO: 在此添加命令处理程序代码
	set = 3;
}


void CCTest55View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	m_point.x = point.x;
	m_point.y = point.y;
}


void CCTest55View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonUp(nFlags, point);
	CClientDC dc(this);
	CView::OnLButtonUp(nFlags, point);
	n_point.x = point.x;
	n_point.y = point.y;
	switch (set)
	{
	case 1:
		dc.MoveTo(n_point.x, n_point.y);
		dc.LineTo(m_point.x, m_point.y);
		break;
	case 2:
		m_Crect.left = m_point.x;
		m_Crect.top = m_point.y;
		m_Crect.right = n_point.x;
		m_Crect.bottom = n_point.y;
		dc.Rectangle(m_Crect);
		break;
	case 3:
		m_Crect.left = m_point.x;
		m_Crect.top = m_point.y;
		m_Crect.right = n_point.x;
		m_Crect.bottom = n_point.y;
		dc.Ellipse(m_Crect);
		break;
	default:
		break;
	}
}
