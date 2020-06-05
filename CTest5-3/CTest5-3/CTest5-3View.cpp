
// CTest5-3View.cpp : CCTest53View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CCTest53View ����/����

CCTest53View::CCTest53View()
{
	// TODO: �ڴ˴���ӹ������

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
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest53View ����

void CCTest53View::OnDraw(CDC* pDC)
{
	CCTest53Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);  //����ͼѡ��������
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);//�����ͻ�����
}


// CCTest53View ���

#ifdef _DEBUG
void CCTest53View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest53View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest53Doc* CCTest53View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest53Doc)));
	return (CCTest53Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest53View ��Ϣ�������
