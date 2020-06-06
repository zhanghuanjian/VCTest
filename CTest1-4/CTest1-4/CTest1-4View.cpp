
// CTest1-4View.cpp : CCTest14View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest1-4.h"
#endif

#include "CTest1-4Doc.h"
#include "CTest1-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest14View

IMPLEMENT_DYNCREATE(CCTest14View, CView)

BEGIN_MESSAGE_MAP(CCTest14View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest14View ����/����

CCTest14View::CCTest14View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest14View::~CCTest14View()
{
}

BOOL CCTest14View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest14View ����

void CCTest14View::OnDraw(CDC* /*pDC*/)
{
	CCTest14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest14View ���

#ifdef _DEBUG
void CCTest14View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest14View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest14Doc* CCTest14View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest14Doc)));
	return (CCTest14Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest14View ��Ϣ�������


void CCTest14View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CCTest14Doc* pDoc = GetDocument();
	pDoc->count++;

	CView::OnLButtonDown(nFlags, point);
}


void CCTest14View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CCTest14Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("%d"), pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(300, 300, s);

	CView::OnRButtonDown(nFlags, point);
}
