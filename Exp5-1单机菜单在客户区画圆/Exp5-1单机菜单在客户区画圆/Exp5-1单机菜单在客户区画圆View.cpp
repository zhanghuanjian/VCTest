
// Exp5-1单机菜单在客户区画圆View.cpp : CExp51单机菜单在客户区画圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Exp5-1单机菜单在客户区画圆.h"
#endif

#include "Exp5-1单机菜单在客户区画圆Doc.h"
#include "Exp5-1单机菜单在客户区画圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExp51单机菜单在客户区画圆View

IMPLEMENT_DYNCREATE(CExp51单机菜单在客户区画圆View, CView)

BEGIN_MESSAGE_MAP(CExp51单机菜单在客户区画圆View, CView)
	ON_COMMAND(ID_HUAYUAN, &CExp51单机菜单在客户区画圆View::OnHuayuan)
END_MESSAGE_MAP()

// CExp51单机菜单在客户区画圆View 构造/析构

CExp51单机菜单在客户区画圆View::CExp51单机菜单在客户区画圆View()
{
	// TODO: 在此处添加构造代码

}

CExp51单机菜单在客户区画圆View::~CExp51单机菜单在客户区画圆View()
{
}

BOOL CExp51单机菜单在客户区画圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CExp51单机菜单在客户区画圆View 绘制

void CExp51单机菜单在客户区画圆View::OnDraw(CDC* /*pDC*/)
{
	CExp51单机菜单在客户区画圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CExp51单机菜单在客户区画圆View 诊断

#ifdef _DEBUG
void CExp51单机菜单在客户区画圆View::AssertValid() const
{
	CView::AssertValid();
}

void CExp51单机菜单在客户区画圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExp51单机菜单在客户区画圆Doc* CExp51单机菜单在客户区画圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExp51单机菜单在客户区画圆Doc)));
	return (CExp51单机菜单在客户区画圆Doc*)m_pDocument;
}
#endif //_DEBUG


// CExp51单机菜单在客户区画圆View 消息处理程序


void CExp51单机菜单在客户区画圆View::OnHuayuan()
{
	// TODO: 在此添加命令处理程序代码
	CRect  rect;
	CPoint centerPoint = rect.CenterPoint();
	GetClientRect(&rect);
	CClientDC dc(this);
	for(int r=50,)
		dc.Ellipse(CRect(centerPoint.x-r, centerPoint.y-r, centerPoint.x + r, centerPoint.y + r));
		r = r + 20;
		
	}
	
}
