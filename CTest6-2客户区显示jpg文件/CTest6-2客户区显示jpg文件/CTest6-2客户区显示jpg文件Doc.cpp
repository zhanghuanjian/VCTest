
// CTest6-2�ͻ�����ʾjpg�ļ�Doc.cpp : CCTest62�ͻ�����ʾjpg�ļ�Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest6-2�ͻ�����ʾjpg�ļ�.h"
#endif

#include "CTest6-2�ͻ�����ʾjpg�ļ�Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest62�ͻ�����ʾjpg�ļ�Doc

IMPLEMENT_DYNCREATE(CCTest62�ͻ�����ʾjpg�ļ�Doc, CDocument)

BEGIN_MESSAGE_MAP(CCTest62�ͻ�����ʾjpg�ļ�Doc, CDocument)
END_MESSAGE_MAP()


// CCTest62�ͻ�����ʾjpg�ļ�Doc ����/����

CCTest62�ͻ�����ʾjpg�ļ�Doc::CCTest62�ͻ�����ʾjpg�ļ�Doc()
{
	// TODO: �ڴ����һ���Թ������

}

CCTest62�ͻ�����ʾjpg�ļ�Doc::~CCTest62�ͻ�����ʾjpg�ļ�Doc()
{
}

BOOL CCTest62�ͻ�����ʾjpg�ļ�Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CCTest62�ͻ�����ʾjpg�ļ�Doc ���л�

void CCTest62�ͻ�����ʾjpg�ļ�Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CCTest62�ͻ�����ʾjpg�ļ�Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CCTest62�ͻ�����ʾjpg�ļ�Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest62�ͻ�����ʾjpg�ļ�Doc::SetSearchContent(const CString& value)
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

// CCTest62�ͻ�����ʾjpg�ļ�Doc ���

#ifdef _DEBUG
void CCTest62�ͻ�����ʾjpg�ļ�Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest62�ͻ�����ʾjpg�ļ�Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest62�ͻ�����ʾjpg�ļ�Doc ����
