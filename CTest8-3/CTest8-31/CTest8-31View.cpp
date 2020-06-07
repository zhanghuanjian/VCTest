
// CTest8-31View.cpp : CCTest831View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest8-31.h"
#endif

#include "CTest8-31Doc.h"
#include "CTest8-31View.h"
#include"MyDlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest831View

IMPLEMENT_DYNCREATE(CCTest831View, CView)

BEGIN_MESSAGE_MAP(CCTest831View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_OPENFILE, &CCTest831View::OnOpenfile)
END_MESSAGE_MAP()

// CCTest831View 构造/析构

CCTest831View::CCTest831View()
{
	// TODO: 在此处添加构造代码

}

CCTest831View::~CCTest831View()
{
}

BOOL CCTest831View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest831View 绘制

void CCTest831View::OnDraw(CDC* /*pDC*/)
{
	CCTest831Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest831View 诊断

#ifdef _DEBUG
void CCTest831View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest831View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest831Doc* CCTest831View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest831Doc)));
	return (CCTest831Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest831View 消息处理程序


void CCTest831View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDblClk(nFlags, point);
	CFileDialog cfd(true);
	CClientDC dc(this);
	int r = cfd.DoModal();

	if (r == IDOK)
	{
		filename = cfd.GetPathName();
		dc.TextOutW(30, 30, filename);

	}
}


void CCTest831View::OnOpenfile()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	CClientDC dc(this);
	dlg.x = filename;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}

}
