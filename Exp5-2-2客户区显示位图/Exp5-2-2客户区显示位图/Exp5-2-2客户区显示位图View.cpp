
// Exp5-2-2客户区显示位图View.cpp : CExp522客户区显示位图View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Exp5-2-2客户区显示位图.h"
#endif

#include "Exp5-2-2客户区显示位图Doc.h"
#include "Exp5-2-2客户区显示位图View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExp522客户区显示位图View

IMPLEMENT_DYNCREATE(CExp522客户区显示位图View, CView)

BEGIN_MESSAGE_MAP(CExp522客户区显示位图View, CView)
END_MESSAGE_MAP()

// CExp522客户区显示位图View 构造/析构

CExp522客户区显示位图View::CExp522客户区显示位图View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;  //初始化
	m_Bitmap.LoadOEMBitmap(IDB_SHOWCAR);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;


}

CExp522客户区显示位图View::~CExp522客户区显示位图View()
{
}

BOOL CExp522客户区显示位图View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CExp522客户区显示位图View 绘制

void CExp522客户区显示位图View::OnDraw(CDC* pDC)
{
	CExp522客户区显示位图Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CDC MemDC;    //绘制
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);

}


// CExp522客户区显示位图View 诊断

#ifdef _DEBUG
void CExp522客户区显示位图View::AssertValid() const
{
	CView::AssertValid();
}

void CExp522客户区显示位图View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExp522客户区显示位图Doc* CExp522客户区显示位图View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExp522客户区显示位图Doc)));
	return (CExp522客户区显示位图Doc*)m_pDocument;
}
#endif //_DEBUG


// CExp522客户区显示位图View 消息处理程序
