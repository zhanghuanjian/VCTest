
// CTest5-3View.cpp : CCTest53View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest5-3.h"
#endif

#include "CTest5-3Doc.h"
#include "CTest5-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest53View

IMPLEMENT_DYNCREATE(CCTest53View, CView)

BEGIN_MESSAGE_MAP(CCTest53View, CView)
END_MESSAGE_MAP()

// CCTest53View 构造/析构

CCTest53View::CCTest53View()
{
	// TODO: 在此处添加构造代码

	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;

}

CCTest53View::~CCTest53View()
{
}

BOOL CCTest53View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest53View 绘制

void CCTest53View::OnDraw(CDC* pDC)
{
	CCTest53Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);  //把这图选进画室里
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);//画到客户区里
}


// CCTest53View 诊断

#ifdef _DEBUG
void CCTest53View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest53View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest53Doc* CCTest53View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest53Doc)));
	return (CCTest53Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest53View 消息处理程序
