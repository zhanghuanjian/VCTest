
// CTest5-4View.cpp : CCTest54View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest5-4.h"
#endif

#include "CTest5-4Doc.h"
#include "CTest5-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest54View

IMPLEMENT_DYNCREATE(CCTest54View, CView)

BEGIN_MESSAGE_MAP(CCTest54View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest54View ����/����

CCTest54View::CCTest54View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest54View::~CCTest54View()
{
}

BOOL CCTest54View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest54View ����

void CCTest54View::OnDraw(CDC* /*pDC*/)
{
	CCTest54Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest54View ���

#ifdef _DEBUG
void CCTest54View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest54View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest54Doc* CCTest54View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest54Doc)));
	return (CCTest54Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest54View ��Ϣ�������


void CCTest54View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	int r = nFlags;
	if (r == IDOK)
	{
		dc.TextOutW(200, 200, _T("�Ż���"));
	}

	CView::OnLButtonDown(nFlags, point);
}
