
// CTest13-2MFC数据库的增删查改Doc.cpp : CCTest132MFC数据库的增删查改Doc 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest13-2MFC数据库的增删查改.h"
#endif

#include "CTest13-2MFC数据库的增删查改Set.h"
#include "CTest13-2MFC数据库的增删查改Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest132MFC数据库的增删查改Doc

IMPLEMENT_DYNCREATE(CCTest132MFC数据库的增删查改Doc, CDocument)

BEGIN_MESSAGE_MAP(CCTest132MFC数据库的增删查改Doc, CDocument)
END_MESSAGE_MAP()


// CCTest132MFC数据库的增删查改Doc 构造/析构

CCTest132MFC数据库的增删查改Doc::CCTest132MFC数据库的增删查改Doc()
{
	// TODO: 在此添加一次性构造代码

}

CCTest132MFC数据库的增删查改Doc::~CCTest132MFC数据库的增删查改Doc()
{
}

BOOL CCTest132MFC数据库的增删查改Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}



#ifdef SHARED_HANDLERS

// 缩略图的支持
void CCTest132MFC数据库的增删查改Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// 修改此代码以绘制文档数据
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// 搜索处理程序的支持
void CCTest132MFC数据库的增删查改Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// 从文档数据设置搜索内容。
	// 内容部分应由“;”分隔

	// 例如:     strSearchContent = _T("point;rectangle;circle;ole object;")；
	SetSearchContent(strSearchContent);
}

void CCTest132MFC数据库的增删查改Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CCTest132MFC数据库的增删查改Doc 诊断

#ifdef _DEBUG
void CCTest132MFC数据库的增删查改Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest132MFC数据库的增删查改Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest132MFC数据库的增删查改Doc 命令
