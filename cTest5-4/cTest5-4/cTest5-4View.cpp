
// cTest5-4View.cpp : CcTest54View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "cTest5-4.h"
#endif

#include "cTest5-4Doc.h"
#include "cTest5-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CcTest54View

IMPLEMENT_DYNCREATE(CcTest54View, CView)

BEGIN_MESSAGE_MAP(CcTest54View, CView)
	ON_COMMAND(ID_DRAWCIRCLE, &CcTest54View::OnDrawcircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CcTest54View 构造/析构

CcTest54View::CcTest54View()
{
	// TODO: 在此处添加构造代码
	set = true;
	N = 5;

}

CcTest54View::~CcTest54View()
{
}

BOOL CcTest54View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CcTest54View 绘制

void CcTest54View::OnDraw(CDC* /*pDC*/)
{
	CcTest54Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CcTest54View 诊断

#ifdef _DEBUG
void CcTest54View::AssertValid() const
{
	CView::AssertValid();
}

void CcTest54View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CcTest54Doc* CcTest54View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CcTest54Doc)));
	return (CcTest54Doc*)m_pDocument;
}
#endif //_DEBUG


// CcTest54View 消息处理程序


void CcTest54View::OnDrawcircle()
{
	// TODO: 在此添加命令处理程序代码
	GetClientRect(&m_window);
	int x1 = (m_window.left + m_window.right) / 2;
	int x2 = (m_window.bottom + m_window.top) / 2;
	GetClientRect(&cr);
	CClientDC DC(this);
	cr.left = x1 - 50;
	cr.right = x1 + 50;
	cr.top = x2 - 50;
	cr.bottom = x2 + 50;

	if (set)
	{
		for (int i = 0; i < N; i++)
		{

			SetTimer(i, 200, NULL);
		}
		set = false;
	}
}


void CcTest54View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CClientDC dc(this);
	int i = nIDEvent;
	cr.left -= 5;
	cr.right += 5;
	cr.top -= 5;
	cr.bottom += 5;

	dc.Ellipse(cr);
	CPen pen(PS_SOLID, 20, RGB(rand() % 150, rand() % 150, rand() % 150));
	CPen* color;
	color = dc.SelectObject(&pen);
	dc.Ellipse(cr);

	CView::OnTimer(nIDEvent);
}
