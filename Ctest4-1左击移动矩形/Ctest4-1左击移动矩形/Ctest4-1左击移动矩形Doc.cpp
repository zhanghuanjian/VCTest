
// Ctest4-1����ƶ�����Doc.cpp : CCtest41����ƶ�����Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Ctest4-1����ƶ�����.h"
#endif

#include "Ctest4-1����ƶ�����Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCtest41����ƶ�����Doc

IMPLEMENT_DYNCREATE(CCtest41����ƶ�����Doc, CDocument)

BEGIN_MESSAGE_MAP(CCtest41����ƶ�����Doc, CDocument)
END_MESSAGE_MAP()


// CCtest41����ƶ�����Doc ����/����

CCtest41����ƶ�����Doc::CCtest41����ƶ�����Doc()
{
	// TODO:  �ڴ����һ���Թ������
	m_tagRec.left = 30;
	m_tagRec.top = 30;
	m_tagRec.right = 350;
	m_tagRec.bottom = 300;

}

CCtest41����ƶ�����Doc::~CCtest41����ƶ�����Doc()
{
}

BOOL CCtest41����ƶ�����Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO:  �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CCtest41����ƶ�����Doc ���л�

void CCtest41����ƶ�����Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO:  �ڴ���Ӵ洢����
	}
	else
	{
		// TODO:  �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CCtest41����ƶ�����Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CCtest41����ƶ�����Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCtest41����ƶ�����Doc::SetSearchContent(const CString& value)
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

// CCtest41����ƶ�����Doc ���

#ifdef _DEBUG
void CCtest41����ƶ�����Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCtest41����ƶ�����Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCtest41����ƶ�����Doc ����
