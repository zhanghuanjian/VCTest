
// CTest7-3View.cpp : CCTest73View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest7-3.h"
#endif

#include "CTest7-3Doc.h"
#include "CTest7-3View.h"
//#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest73View

IMPLEMENT_DYNCREATE(CCTest73View, CView)

BEGIN_MESSAGE_MAP(CCTest73View, CView)
	ON_COMMAND(ID_POPOUT, &CCTest73View::OnPopout)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_SHOWHIDE, &CCTest73View::OnShowhide)
END_MESSAGE_MAP()

// CCTest73View 构造/析构

CCTest73View::CCTest73View()
{
	// TODO: 在此处添加构造代码
	show_hide = 1;
    pD =NULL;

}

CCTest73View::~CCTest73View()
{
}

BOOL CCTest73View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest73View 绘制

void CCTest73View::OnDraw(CDC* /*pDC*/)
{
	CCTest73Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest73View 诊断

#ifdef _DEBUG
void CCTest73View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest73View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest73Doc* CCTest73View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest73Doc)));
	return (CCTest73Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest73View 消息处理程序


void CCTest73View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	int r = dlg.DoModal();

	if (r == IDOK)
	{
		int X, Y, R;
		X = dlg.x;
		Y = dlg.y;
		R = dlg.r;

		CRect re(X - R, Y - R, X + R, Y + R);
		GetDC()->Ellipse(re);

	}
}


void CCTest73View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	pD = new MyDlg0;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);

	CView::OnLButtonDblClk(nFlags, point);
}


void CCTest73View::OnShowhide()
{
	// TODO: 在此添加命令处理程序代码
	if (show_hide == 1)
		show_hide = 0;
	else
		show_hide = 1;
		pD->ShowWindow(show_hide);

}
