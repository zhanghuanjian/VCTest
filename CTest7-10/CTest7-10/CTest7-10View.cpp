
// CTest7-10View.cpp : CCTest710View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest7-10.h"
#endif

#include "CTest7-10Doc.h"
#include "CTest7-10View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest710View

IMPLEMENT_DYNCREATE(CCTest710View, CView)

BEGIN_MESSAGE_MAP(CCTest710View, CView)
	ON_COMMAND(ID_POPOUT, &CCTest710View::OnPopout)
END_MESSAGE_MAP()

// CCTest710View 构造/析构

CCTest710View::CCTest710View()
{
	// TODO: 在此处添加构造代码

}

CCTest710View::~CCTest710View()
{
}

BOOL CCTest710View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest710View 绘制

void CCTest710View::OnDraw(CDC* pDC)
{
	CCTest710Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
		
}


// CCTest710View 诊断

#ifdef _DEBUG
void CCTest710View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest710View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest710Doc* CCTest710View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest710Doc)));
	return (CCTest710Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest710View 消息处理程序


void CCTest710View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}
}
