
// CTest5-2View.cpp : CCTest52View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest5-2.h"
#endif

#include "CTest5-2Doc.h"
#include "CTest5-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest52View

IMPLEMENT_DYNCREATE(CCTest52View, CView)

BEGIN_MESSAGE_MAP(CCTest52View, CView)
	ON_COMMAND(ID_SHOWNUMBER, &CCTest52View::OnShownumber)
END_MESSAGE_MAP()

// CCTest52View ����/����

CCTest52View::CCTest52View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest52View::~CCTest52View()
{
}

BOOL CCTest52View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest52View ����

void CCTest52View::OnDraw(CDC* /*pDC*/)
{
	CCTest52Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest52View ���

#ifdef _DEBUG
void CCTest52View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest52View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest52Doc* CCTest52View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest52Doc)));
	return (CCTest52Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest52View ��Ϣ�������


void CCTest52View::OnShownumber()
{
	// TODO: �ڴ���������������
	CString s = _T("201812300045");
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);

}
