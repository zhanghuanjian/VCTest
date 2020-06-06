
// CTest7-6View.cpp : CCTest76View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest7-6.h"
#endif

#include "CTest7-6Doc.h"
#include "CTest7-6View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest76View

IMPLEMENT_DYNCREATE(CCTest76View, CView)

BEGIN_MESSAGE_MAP(CCTest76View, CView)
	ON_COMMAND(ID_ExString, &CCTest76View::OnExstring)
END_MESSAGE_MAP()

// CCTest76View 构造/析构

CCTest76View::CCTest76View()
{
	// TODO: 在此处添加构造代码

}

CCTest76View::~CCTest76View()
{
}

BOOL CCTest76View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest76View 绘制

void CCTest76View::OnDraw(CDC* /*pDC*/)
{
	CCTest76Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest76View 诊断

#ifdef _DEBUG
void CCTest76View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest76View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest76Doc* CCTest76View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest76Doc)));
	return (CCTest76Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest76View 消息处理程序


void CCTest76View::OnExstring()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}
}
