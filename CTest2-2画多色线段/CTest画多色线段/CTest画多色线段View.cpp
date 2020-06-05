
// CTest画多色线段View.cpp : CCTest画多色线段View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest画多色线段.h"
#endif

#include "CTest画多色线段Doc.h"
#include "CTest画多色线段View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest画多色线段View

IMPLEMENT_DYNCREATE(CCTest画多色线段View, CView)

BEGIN_MESSAGE_MAP(CCTest画多色线段View, CView)
END_MESSAGE_MAP()

// CCTest画多色线段View 构造/析构

CCTest画多色线段View::CCTest画多色线段View()
{
	// TODO: 在此处添加构造代码

}

CCTest画多色线段View::~CCTest画多色线段View()
{
}

BOOL CCTest画多色线段View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest画多色线段View 绘制

void CCTest画多色线段View::OnDraw(CDC* pDC)
{
	CCTest画多色线段Doc* pDoc = GetDocument();//取得文档类的指针,通过它可以访问文档类中的成员
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码+

	int red = 0, green = 0, blue = 0;//都是零,那就是黑色
	int width=2;//
	int row=20;//行
	for (int s = 0; s < 8; s++)//循环八次
	{
		int color = RGB(red, green, blue);//把刚刚的三原色合成一个颜色赋给color，黑色（根据红绿蓝构造一种颜色）
		CPen newPen(PS_SOLID, width, color);//构造一只新笔，（比的线条样式-实线，笔的宽度，笔的颜色）
		CPen *oldPen = pDC->SelectObject(&newPen);//选用这支新笔
		pDC->MoveTo(20, row);//笔移到这个位置，横坐标20，纵坐标row
		pDC->LineTo(300, row);//从当前点位置（20，row）连接到这个点（300，row），可见，横坐标不同而已，纵坐标没变
		pDC->SelectObject(oldPen);//画完这条线段之后又把以前的老笔选入这个设备环境，新笔撤掉
		red += 32;//改变各项值
		green += 16;
		blue += 8;
		width += 2;
		row += 30;

	}
}


// CCTest画多色线段View 诊断

#ifdef _DEBUG
void CCTest画多色线段View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest画多色线段View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest画多色线段Doc* CCTest画多色线段View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest画多色线段Doc)));
	return (CCTest画多色线段Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest画多色线段View 消息处理程序
