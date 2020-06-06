
// CTest7-7View.cpp : CCTest77View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest7-7.h"
#endif

#include "CTest7-7Doc.h"
#include "CTest7-7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest77View

IMPLEMENT_DYNCREATE(CCTest77View, CView)

BEGIN_MESSAGE_MAP(CCTest77View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CCTest77View ����/����

CCTest77View::CCTest77View()
{
	// TODO: �ڴ˴���ӹ������
	rect.SetRect(30, 30, 300, 300);

}

CCTest77View::~CCTest77View()
{
}

BOOL CCTest77View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest77View ����

void CCTest77View::OnDraw(CDC* pDC)
{
	CCTest77Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(rect);
}


// CCTest77View ���

#ifdef _DEBUG
void CCTest77View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest77View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest77Doc* CCTest77View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest77Doc)));
	return (CCTest77Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest77View ��Ϣ�������


void CCTest77View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnMouseMove(nFlags, point);
	if (nFlags)
	{
		rect.top = point.y - 20;
		rect.bottom = point.y + 20;
		rect.left = point.x - 50;
		rect.right = point.x + 50;
		Invalidate();
	}
}
