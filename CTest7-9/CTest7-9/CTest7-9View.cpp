
// CTest7-9View.cpp : CCTest79View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest7-9.h"
#endif

#include "CTest7-9Doc.h"
#include "CTest7-9View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest79View

IMPLEMENT_DYNCREATE(CCTest79View, CView)

BEGIN_MESSAGE_MAP(CCTest79View, CView)
	ON_COMMAND(ID_MOVECIRCLE, &CCTest79View::OnMovecircle)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CCTest79View 构造/析构

CCTest79View::CCTest79View()
{
	// TODO: 在此处添加构造代码

}

CCTest79View::~CCTest79View()
{
}

BOOL CCTest79View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest79View 绘制

void CCTest79View::OnDraw(CDC* pDC)
{
	CCTest79Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if (set == true)
	{

		SetTimer(1, rand() % 100 + 50, NULL);
		this->GetClientRect(&rect);
		set = false;


	}
	pDC->Ellipse(m_rect);
}


// CCTest79View 诊断

#ifdef _DEBUG
void CCTest79View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest79View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest79Doc* CCTest79View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest79Doc)));
	return (CCTest79Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest79View 消息处理程序


void CCTest79View::OnMovecircle()
{
	// TODO: 在此添加命令处理程序代码
	m_rect.top = (rect.bottom + rect.top) / 2 - 100;
	m_rect.bottom = (rect.bottom + rect.top) / 2 + 100;
	m_rect.left = (rect.left + rect.right) / 2 - 100;
	m_rect.right = (rect.left + rect.right) / 2 + 100;
	Invalidate();
}


void CCTest79View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	x = 1;
	Invalidate();
}


void CCTest79View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnTimer(nIDEvent);
	int i = nIDEvent;
	if (x == 1)
	{

		if (m_rect.right > rect.right)
		{
			flag = 1;
		}
		if (m_rect.left < rect.left)
		{
			flag = 0;
		}
		if (flag == 0)
		{
			m_rect.right += 20;
			m_rect.left += 20;
		}
		if (flag == 1)
		{
			m_rect.left -= 20;
			m_rect.right -= 20;

		}
	}
	Invalidate();
}


void CCTest79View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDblClk(nFlags, point);
	x = 0;
}
