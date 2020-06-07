
// CTest8-5View.cpp : CCTest85View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest8-5.h"
#endif

#include "CTest8-5Doc.h"
#include "CTest8-5View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest85View

IMPLEMENT_DYNCREATE(CCTest85View, CView)

BEGIN_MESSAGE_MAP(CCTest85View, CView)
	ON_COMMAND(ID_ELLIPSE, &CCTest85View::OnEllipse)
END_MESSAGE_MAP()

// CCTest85View 构造/析构

CCTest85View::CCTest85View()
{
	// TODO: 在此处添加构造代码

}

CCTest85View::~CCTest85View()
{
}

BOOL CCTest85View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest85View 绘制

void CCTest85View::OnDraw(CDC* /*pDC*/)
{
	CCTest85Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest85View 诊断

#ifdef _DEBUG
void CCTest85View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest85View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest85Doc* CCTest85View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest85Doc)));
	return (CCTest85Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest85View 消息处理程序


void CCTest85View::OnEllipse()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int X, Y, A, B;
		X = dlg.x;
		Y = dlg.y;
		A = dlg.a;
		B = dlg.b;
		CRect rect(X - A, Y - B, X + A, Y + B);
		GetDC()->Ellipse(rect);

	}
}
