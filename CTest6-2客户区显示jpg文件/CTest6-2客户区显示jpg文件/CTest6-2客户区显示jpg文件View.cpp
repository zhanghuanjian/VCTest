
// CTest6-2客户区显示jpg文件View.cpp : CCTest62客户区显示jpg文件View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest6-2客户区显示jpg文件.h"
#endif

#include "CTest6-2客户区显示jpg文件Doc.h"
#include "CTest6-2客户区显示jpg文件View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest62客户区显示jpg文件View

IMPLEMENT_DYNCREATE(CCTest62客户区显示jpg文件View, CView)

BEGIN_MESSAGE_MAP(CCTest62客户区显示jpg文件View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CCTest62客户区显示jpg文件View::OnFileOpen)
END_MESSAGE_MAP()

// CCTest62客户区显示jpg文件View 构造/析构

CCTest62客户区显示jpg文件View::CCTest62客户区显示jpg文件View()
{
	// TODO: 在此处添加构造代码

}

CCTest62客户区显示jpg文件View::~CCTest62客户区显示jpg文件View()
{
}

BOOL CCTest62客户区显示jpg文件View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest62客户区显示jpg文件View 绘制

void CCTest62客户区显示jpg文件View::OnDraw(CDC* /*pDC*/)
{
	CCTest62客户区显示jpg文件Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest62客户区显示jpg文件View 诊断

#ifdef _DEBUG
void CCTest62客户区显示jpg文件View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest62客户区显示jpg文件View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest62客户区显示jpg文件Doc* CCTest62客户区显示jpg文件View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest62客户区显示jpg文件Doc)));
	return (CCTest62客户区显示jpg文件Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest62客户区显示jpg文件View 消息处理程序


void CCTest62客户区显示jpg文件View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);//true是打开文件,false是另存为
	int r = cfd.DoModal();//模式对话框
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();//读取路径
		dc.TextOutW(10, 10, filename);//输出文件名

		CImage img;
		img.Destroy();//防内存泄露
		img.Load(filename);
		img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());

	}

}
