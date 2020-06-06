
// CTest7-8View.cpp : CCTest78View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest7-8.h"
#endif

#include "CTest7-8Doc.h"
#include "CTest7-8View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest78View

IMPLEMENT_DYNCREATE(CCTest78View, CView)

BEGIN_MESSAGE_MAP(CCTest78View, CView)
	ON_COMMAND(ID_POPOUT, &CCTest78View::OnPopout)
END_MESSAGE_MAP()

// CCTest78View 构造/析构

CCTest78View::CCTest78View()
{
	// TODO: 在此处添加构造代码

}

CCTest78View::~CCTest78View()
{
}

BOOL CCTest78View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest78View 绘制

void CCTest78View::OnDraw(CDC* /*pDC*/)
{
	CCTest78Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest78View 诊断

#ifdef _DEBUG
void CCTest78View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest78View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest78Doc* CCTest78View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest78Doc)));
	return (CCTest78Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest78View 消息处理程序


void CCTest78View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{

	}

}
