
// CTest12-2�ۺ�ʵ��1Doc.cpp : CCTest122�ۺ�ʵ��1Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest12-2�ۺ�ʵ��1.h"
#endif

#include "CTest12-2�ۺ�ʵ��1Set.h"
#include "CTest12-2�ۺ�ʵ��1Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest122�ۺ�ʵ��1Doc

IMPLEMENT_DYNCREATE(CCTest122�ۺ�ʵ��1Doc, CDocument)

BEGIN_MESSAGE_MAP(CCTest122�ۺ�ʵ��1Doc, CDocument)
END_MESSAGE_MAP()


// CCTest122�ۺ�ʵ��1Doc ����/����

CCTest122�ۺ�ʵ��1Doc::CCTest122�ۺ�ʵ��1Doc()
{
	// TODO: �ڴ����һ���Թ������

}

CCTest122�ۺ�ʵ��1Doc::~CCTest122�ۺ�ʵ��1Doc()
{
}

BOOL CCTest122�ۺ�ʵ��1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}



#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CCTest122�ۺ�ʵ��1Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
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

// ������������֧��
void CCTest122�ۺ�ʵ��1Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest122�ۺ�ʵ��1Doc::SetSearchContent(const CString& value)
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

// CCTest122�ۺ�ʵ��1Doc ���

#ifdef _DEBUG
void CCTest122�ۺ�ʵ��1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest122�ۺ�ʵ��1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest122�ۺ�ʵ��1Doc ����
