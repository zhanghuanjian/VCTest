
// CTest8-4View.cpp : CCTest84View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest8-4.h"
#endif

#include "CTest8-4Doc.h"
#include "CTest8-4View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest84View

IMPLEMENT_DYNCREATE(CCTest84View, CView)

BEGIN_MESSAGE_MAP(CCTest84View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &CCTest84View::OnPopout)
END_MESSAGE_MAP()

// CCTest84View 构造/析构

CCTest84View::CCTest84View()
{
	// TODO: 在此处添加构造代码

}

CCTest84View::~CCTest84View()
{
}

BOOL CCTest84View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest84View 绘制

void CCTest84View::OnDraw(CDC* /*pDC*/)
{
	CCTest84Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest84View 诊断

#ifdef _DEBUG
void CCTest84View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest84View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest84Doc* CCTest84View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest84Doc)));
	return (CCTest84Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest84View 消息处理程序


void CCTest84View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CFileDialog cfd(true);
	CClientDC dc(this);

	int r = cfd.DoModal();
	if (r == IDOK)
	{
		filename = cfd.GetPathName();
		dc.TextOutW(30, 30, filename);

	}


	CView::OnLButtonDblClk(nFlags, point);
}


void CCTest84View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	CClientDC dc(this);

	int r = dlg.DoModal();
	dlg.x = filename;
	if (r== IDOK)
	{

	}
}
