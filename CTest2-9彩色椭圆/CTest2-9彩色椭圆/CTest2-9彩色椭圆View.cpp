
// CTest2-9彩色椭圆View.cpp : CCTest29彩色椭圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest2-9彩色椭圆.h"
#endif

#include "CTest2-9彩色椭圆Doc.h"
#include "CTest2-9彩色椭圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest29彩色椭圆View

IMPLEMENT_DYNCREATE(CCTest29彩色椭圆View, CView)

BEGIN_MESSAGE_MAP(CCTest29彩色椭圆View, CView)
END_MESSAGE_MAP()

// CCTest29彩色椭圆View 构造/析构

CCTest29彩色椭圆View::CCTest29彩色椭圆View()
{
	// TODO: 在此处添加构造代码

}

CCTest29彩色椭圆View::~CCTest29彩色椭圆View()
{
}

BOOL CCTest29彩色椭圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest29彩色椭圆View 绘制

void CCTest29彩色椭圆View::OnDraw(CDC* pDC)
{
	CCTest29彩色椭圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	this->GetClientRect(&cr); //获得客户区的大小

	int color = RGB(250, 0, 0); //填充红色
	CBrush newBrush(color); //构造新刷
	CBrush* oldBrush = pDC->SelectObject(&newBrush);//把新刷选入画室
	pDC->Ellipse(cr); //画椭圆
	pDC->SelectObject(oldBrush); //换回旧刷

}


// CCTest29彩色椭圆View 诊断

#ifdef _DEBUG
void CCTest29彩色椭圆View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest29彩色椭圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest29彩色椭圆Doc* CCTest29彩色椭圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest29彩色椭圆Doc)));
	return (CCTest29彩色椭圆Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest29彩色椭圆View 消息处理程序
