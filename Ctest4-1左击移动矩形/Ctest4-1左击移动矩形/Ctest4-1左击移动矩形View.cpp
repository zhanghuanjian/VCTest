
// Ctest4-1����ƶ�����View.cpp : CCtest41����ƶ�����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Ctest4-1����ƶ�����.h"
#endif

#include "Ctest4-1����ƶ�����Doc.h"
#include "Ctest4-1����ƶ�����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCtest41����ƶ�����View

IMPLEMENT_DYNCREATE(CCtest41����ƶ�����View, CView)

BEGIN_MESSAGE_MAP(CCtest41����ƶ�����View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCtest41����ƶ�����View ����/����

CCtest41����ƶ�����View::CCtest41����ƶ�����View()
{
	// TODO:  �ڴ˴���ӹ������

}

CCtest41����ƶ�����View::~CCtest41����ƶ�����View()
{
}

BOOL CCtest41����ƶ�����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCtest41����ƶ�����View ����

void CCtest41����ƶ�����View::OnDraw(CDC* pDC)
{
	CCtest41����ƶ�����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->m_tagRec);

}


// CCtest41����ƶ�����View ���

#ifdef _DEBUG
void CCtest41����ƶ�����View::AssertValid() const
{
	CView::AssertValid();
}

void CCtest41����ƶ�����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCtest41����ƶ�����Doc* CCtest41����ƶ�����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCtest41����ƶ�����Doc)));
	return (CCtest41����ƶ�����Doc*)m_pDocument;
}
#endif //_DEBUG


// CCtest41����ƶ�����View ��Ϣ�������


void CCtest41����ƶ�����View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CCtest41����ƶ�����Doc* pDoc = GetDocument();

	if (nFlags&MK_SHIFT)//���������µ�ͬʱ��shift���Ƿ���
	{
		pDoc->m_tagRec.left = 30;
		pDoc->m_tagRec.top = 30;
		pDoc->m_tagRec.right = 350;
		pDoc->m_tagRec.bottom = 300;
	}
	else
	{
		pDoc->m_tagRec.left = point.x;
		pDoc->m_tagRec.top =point.y;
		pDoc->m_tagRec.right = point.x + 320;
		pDoc->m_tagRec.bottom = point.y+270;

	}
	InvalidateRect(NULL, TRUE);//ǿ���ػ�

	CView::OnLButtonDown(nFlags, point);
}
