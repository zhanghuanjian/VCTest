
// CTest6-3View.cpp : CCTest63View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest6-3.h"
#endif

#include "CTest6-3Doc.h"
#include "CTest6-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest63View

IMPLEMENT_DYNCREATE(CCTest63View, CView)

BEGIN_MESSAGE_MAP(CCTest63View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest63View 构造/析构

CCTest63View::CCTest63View()
{
	// TODO: 在此处添加构造代码

}

CCTest63View::~CCTest63View()
{
}

BOOL CCTest63View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest63View 绘制

void CCTest63View::OnDraw(CDC* pDC)
{
	CCTest63Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(100, 100, 600, 600);
}


// CCTest63View 诊断

#ifdef _DEBUG
void CCTest63View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest63View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest63Doc* CCTest63View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest63Doc)));
	return (CCTest63Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest63View 消息处理程序


void CCTest63View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnChar(nChar, nRepCnt, nFlags);
	CClientDC dc(this);
	CRect Rect(200, 200, 500, 500);

	str.Format(_T("%c"), nChar);

	if (x >= 200 && y >= 200) {       //若为x >= 100 && y >= 100,则字符串按输入顺序在长方形内从右到左显示
		pos = (x - 200) / 10 + (y - 200) / 20 * 30;

		s.Insert(pos, nChar);
	}
	else {
		s.Append(str);
	}
	dc.DrawText(s, Rect, DT_LEFT | DT_WORDBREAK | DT_EDITCONTROL);

}


void CCTest63View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	x = point.x;
	y = point.y;
}
