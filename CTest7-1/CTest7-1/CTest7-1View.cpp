
// CTest7-1View.cpp : CCTest71View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest7-1.h"
#endif

#include "CTest7-1Doc.h"
#include "CTest7-1View.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest71View

IMPLEMENT_DYNCREATE(CCTest71View, CView)

BEGIN_MESSAGE_MAP(CCTest71View, CView)
	ON_COMMAND(ID_POPOUT, &CCTest71View::OnPopout)
END_MESSAGE_MAP()

// CCTest71View 构造/析构

CCTest71View::CCTest71View()
{
	// TODO: 在此处添加构造代码

}

CCTest71View::~CCTest71View()
{
}

BOOL CCTest71View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest71View 绘制

void CCTest71View::OnDraw(CDC* /*pDC*/)
{
	CCTest71Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest71View 诊断

#ifdef _DEBUG
void CCTest71View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest71View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest71Doc* CCTest71View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest71Doc)));
	return (CCTest71Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest71View 消息处理程序


//菜单栏下弹出对话框画圆
void CCTest71View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	int r = dlg.DoModal();

	if (r == IDOK)
	{
		int R, X, Y;
		R = dlg.r;
		X = dlg.x;
		Y = dlg.y;

		CRect re(X - R, Y - R, X + R, Y + R);//构造矩形,根据矩形画圆
		GetDC()->Ellipse(re);
	}
}
