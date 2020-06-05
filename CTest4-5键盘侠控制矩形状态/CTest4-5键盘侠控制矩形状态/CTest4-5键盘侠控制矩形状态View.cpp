
// CTest4-5键盘侠控制矩形状态View.cpp : CCTest45键盘侠控制矩形状态View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest4-5键盘侠控制矩形状态.h"
#endif

#include "CTest4-5键盘侠控制矩形状态Doc.h"
#include "CTest4-5键盘侠控制矩形状态View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest45键盘侠控制矩形状态View

IMPLEMENT_DYNCREATE(CCTest45键盘侠控制矩形状态View, CView)

BEGIN_MESSAGE_MAP(CCTest45键盘侠控制矩形状态View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest45键盘侠控制矩形状态View 构造/析构

CCTest45键盘侠控制矩形状态View::CCTest45键盘侠控制矩形状态View()
{
	// TODO: 在此处添加构造代码

}

CCTest45键盘侠控制矩形状态View::~CCTest45键盘侠控制矩形状态View()
{
}

BOOL CCTest45键盘侠控制矩形状态View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest45键盘侠控制矩形状态View 绘制

void CCTest45键盘侠控制矩形状态View::OnDraw(CDC* pDC)
{
	CCTest45键盘侠控制矩形状态Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	s1.Format(_T("1.按下R键课绘制一个矩形"));
	s2.Format(_T("2.按键盘上的四个方向键可以使矩形向相应方向移动"));
	s3.Format(_T("3.按Home键使矩形向左上角方向增大"));
	s4.Format(_T("4.按End键时矩形向右下角缩小"));
	s5.Format(_T("5.当单击鼠标左键时，矩形恢复到原来大小"));
	pDC->TextOutW(5, 10, s1);
	pDC->TextOutW(5, 30, s2);
	pDC->TextOutW(5, 50, s3);
	pDC->TextOutW(5, 70, s4);
	pDC->TextOutW(5, 90, s5);

	pDC->Rectangle(pDoc->rect);

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest45键盘侠控制矩形状态View 诊断

#ifdef _DEBUG
void CCTest45键盘侠控制矩形状态View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest45键盘侠控制矩形状态View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest45键盘侠控制矩形状态Doc* CCTest45键盘侠控制矩形状态View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest45键盘侠控制矩形状态Doc)));
	return (CCTest45键盘侠控制矩形状态Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest45键盘侠控制矩形状态View 消息处理程序


void CCTest45键盘侠控制矩形状态View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CCTest45键盘侠控制矩形状态Doc* pDoc = GetDocument();
	CRect crect;
	GetClientRect(&crect);

	switch (nChar)
	{
	case 'R':
		pDoc->rect.left = (crect.left + crect.right) / 2 - 10;
		pDoc->rect.right = (crect.left + crect.right) / 2 + 10;
		pDoc->rect.top = (crect.top + crect.bottom) / 2 - 20;
		pDoc->rect.bottom = (crect.top + crect.bottom) / 2 + 20;
		break;

	case VK_LEFT:
		pDoc->rect.left -= 10;
		pDoc->rect.right -= 10;
		break;
	case VK_RIGHT:
		pDoc->rect.left += 10;
		pDoc->rect.right += 10;
		break;
	case VK_UP:
		pDoc->rect.top -= 10;
		pDoc->rect.bottom -= 10;
		break;
	case VK_DOWN:
		pDoc->rect.top += 10;
		pDoc->rect.bottom += 10;
		break;
	case VK_HOME:
		pDoc->rect.left -= 10;
		pDoc->rect.top -= 10;
		break;
	case VK_END:
		pDoc->rect.right -= 10;
		pDoc->rect.bottom -= 10;
		break;
	
}

InvalidateRect(NULL, TRUE);

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CCTest45键盘侠控制矩形状态View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CCTest45键盘侠控制矩形状态Doc* pDoc = GetDocument();
	CRect crect;
	GetClientRect(&crect);

	pDoc->rect.left = (crect.left + crect.right) / 2 - 10;
	pDoc->rect.right = (crect.left + crect.right) / 2 + 10;
	pDoc->rect.top = (crect.top + crect.bottom) / 2 - 20;
	pDoc->rect.bottom = (crect.top + crect.bottom) / 2 + 20;

	InvalidateRect(NULL, TRUE);

	CView::OnLButtonDown(nFlags, point);
}
