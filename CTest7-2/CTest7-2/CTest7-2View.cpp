
// CTest7-2View.cpp : CCTest72View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest7-2.h"
#endif

#include "CTest7-2Doc.h"
#include "CTest7-2View.h"
#include"MyDlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest72View

IMPLEMENT_DYNCREATE(CCTest72View, CView)

BEGIN_MESSAGE_MAP(CCTest72View, CView)
	ON_COMMAND(ID_POPOUT, &CCTest72View::OnPopout)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CCTest72View 构造/析构

CCTest72View::CCTest72View()
{
	// TODO: 在此处添加构造代码

}

CCTest72View::~CCTest72View()
{
}

BOOL CCTest72View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest72View 绘制

void CCTest72View::OnDraw(CDC* /*pDC*/)
{
	CCTest72Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest72View 诊断

#ifdef _DEBUG
void CCTest72View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest72View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest72Doc* CCTest72View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest72Doc)));
	return (CCTest72Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest72View 消息处理程序


void CCTest72View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	int t = dlg.DoModal();

	if (t == IDOK)
	{
		int X, Y, R;
		X = dlg.x;
		Y = dlg.y;
		R = dlg.r;
		CRect re(X - R, Y - R, X + R, Y + R);
		GetDC()->Ellipse(re);
	}
}

//双击弹出对话框
void CCTest72View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	MyDlg0 *pD = new MyDlg0;  //用new来构造对话框对象
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);

	CView::OnLButtonDblClk(nFlags, point);
}
