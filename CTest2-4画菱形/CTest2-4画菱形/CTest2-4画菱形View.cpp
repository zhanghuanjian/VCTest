
// CTest2-4画菱形View.cpp : CCTest24画菱形View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest2-4画菱形.h"
#endif

#include "CTest2-4画菱形Doc.h"
#include "CTest2-4画菱形View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest24画菱形View

IMPLEMENT_DYNCREATE(CCTest24画菱形View, CView)

BEGIN_MESSAGE_MAP(CCTest24画菱形View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest24画菱形View 构造/析构

CCTest24画菱形View::CCTest24画菱形View()
{
	// TODO: 在此处添加构造代码

}

CCTest24画菱形View::~CCTest24画菱形View()
{
}

BOOL CCTest24画菱形View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest24画菱形View 绘制

void CCTest24画菱形View::OnDraw(CDC* /*pDC*/)
{
	CCTest24画菱形Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest24画菱形View 诊断

#ifdef _DEBUG
void CCTest24画菱形View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest24画菱形View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest24画菱形Doc* CCTest24画菱形View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest24画菱形Doc)));
	return (CCTest24画菱形Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest24画菱形View 消息处理程序


void CCTest24画菱形View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);//定义一个CClientDC的对象dc
	CRect rc;//定义一个描述矩形的对象
	GetClientRect(&rc);//获得用户区的尺寸
	                     //下面是绘制菱形的代码

	dc.MoveTo(0, (rc.bottom + rc.top) / 2);//找到一个顶点
	dc.LineTo((rc.left + rc.right) / 2, 0);//连到另一个顶点,再...最后连回第一个顶点
	dc.LineTo(rc.right,(rc.top+rc.bottom)/2);
	dc.LineTo((rc.left + rc.right) / 2, rc.bottom);
	dc.LineTo(0, (rc.top + rc.bottom) / 2);


	CView::OnLButtonDown(nFlags, point);
}
