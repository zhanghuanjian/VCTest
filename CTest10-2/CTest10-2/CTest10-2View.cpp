
// CTest10-2View.cpp : CCTest102View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest10-2.h"
#endif

#include "CTest10-2Doc.h"
#include "CTest10-2View.h"
#include"fac.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest102View

IMPLEMENT_DYNCREATE(CCTest102View, CView)

BEGIN_MESSAGE_MAP(CCTest102View, CView)
END_MESSAGE_MAP()

// CCTest102View ����/����

CCTest102View::CCTest102View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest102View::~CCTest102View()
{
}

BOOL CCTest102View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest102View ����

void CCTest102View::OnDraw(CDC* pDC)
{
	CCTest102Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	int n = 5;
	int a = Factorial(5);
	if (a == 0)
	{
		pDC->TextOutW(200, 180, _T("n��ֵ�������0"));
	}
	if (a == -1)
	{
		pDC->TextOutW(200, 180, _T("n�Ľ׳˽�����"));
	}
	if (a != 0 && a != -1)
	{
		s.Format(_T("%d�Ľ׳�Ϊ%d"), n, a);
		pDC->TextOutW(200, 100, s);
	}
}


// CCTest102View ���

#ifdef _DEBUG
void CCTest102View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest102View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest102Doc* CCTest102View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest102Doc)));
	return (CCTest102Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest102View ��Ϣ�������
