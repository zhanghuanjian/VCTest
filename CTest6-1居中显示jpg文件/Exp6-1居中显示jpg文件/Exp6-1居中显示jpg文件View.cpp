
// Exp6-1居中显示jpg文件View.cpp : CExp61居中显示jpg文件View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Exp6-1居中显示jpg文件.h"
#endif

#include "Exp6-1居中显示jpg文件Doc.h"
#include "Exp6-1居中显示jpg文件View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExp61居中显示jpg文件View

IMPLEMENT_DYNCREATE(CExp61居中显示jpg文件View, CView)

BEGIN_MESSAGE_MAP(CExp61居中显示jpg文件View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CExp61居中显示jpg文件View::OnFileOpen)
END_MESSAGE_MAP()

// CExp61居中显示jpg文件View 构造/析构

CExp61居中显示jpg文件View::CExp61居中显示jpg文件View()
{
	// TODO: 在此处添加构造代码

}

CExp61居中显示jpg文件View::~CExp61居中显示jpg文件View()
{
}

BOOL CExp61居中显示jpg文件View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CExp61居中显示jpg文件View 绘制

void CExp61居中显示jpg文件View::OnDraw(CDC* /*pDC*/)
{
	CExp61居中显示jpg文件Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CExp61居中显示jpg文件View 诊断

#ifdef _DEBUG
void CExp61居中显示jpg文件View::AssertValid() const
{
	CView::AssertValid();
}

void CExp61居中显示jpg文件View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExp61居中显示jpg文件Doc* CExp61居中显示jpg文件View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExp61居中显示jpg文件Doc)));
	return (CExp61居中显示jpg文件Doc*)m_pDocument;
}
#endif //_DEBUG


// CExp61居中显示jpg文件View 消息处理程序


void CExp61居中显示jpg文件View::OnFileOpen()
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
		float w, h, sx, sy;
		{
			CRect rect;//定义CRect对象
			GetClientRect(&rect);//取得客户区信息

			float rect_radio = 1.0*rect.Width() / rect.Height();//计算以定居中;这是客户区的宽高比
			float img_radio = 1.0*img.GetWidth() / img.GetHeight();//这是图像的宽高比

			if (rect_radio > img_radio)//若客户区比图像宽
			{
				h = rect.Height();//则高等于客户区的高
				w = img_radio*h; //图像的宽高比乘以高求得图像的宽
				sx = (rect.Width() - w) / 2;//图像实际显示的左上点位置
				sy = 0;
			}
			else
			{
				w = rect.Width();
				h = w / img_radio;
				sx = 0;
				sy = (rect.Height() - h) / 2;
			}
		}
		img.Draw(dc.m_hDC, sx, sy, w, h);
	}
}
