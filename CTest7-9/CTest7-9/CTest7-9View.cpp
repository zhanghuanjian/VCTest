
// CTest7-9View.cpp : CCTest79View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest7-9.h"
#endif

#include "CTest7-9Doc.h"
#include "CTest7-9View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest79View

IMPLEMENT_DYNCREATE(CCTest79View, CView)

BEGIN_MESSAGE_MAP(CCTest79View, CView)
	ON_COMMAND(ID_MOVECIRCLE, &CCTest79View::OnMovecircle)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CCTest79View ����/����

CCTest79View::CCTest79View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest79View::~CCTest79View()
{
}

BOOL CCTest79View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest79View ����

void CCTest79View::OnDraw(CDC* pDC)
{
	CCTest79Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (set == true)
	{

		SetTimer(1, rand() % 100 + 50, NULL);
		this->GetClientRect(&rect);
		set = false;


	}
	pDC->Ellipse(m_rect);
}


// CCTest79View ���

#ifdef _DEBUG
void CCTest79View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest79View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest79Doc* CCTest79View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest79Doc)));
	return (CCTest79Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest79View ��Ϣ�������


void CCTest79View::OnMovecircle()
{
	// TODO: �ڴ���������������
	m_rect.top = (rect.bottom + rect.top) / 2 - 100;
	m_rect.bottom = (rect.bottom + rect.top) / 2 + 100;
	m_rect.left = (rect.left + rect.right) / 2 - 100;
	m_rect.right = (rect.left + rect.right) / 2 + 100;
	Invalidate();
}


void CCTest79View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	x = 1;
	Invalidate();
}


void CCTest79View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnTimer(nIDEvent);
	int i = nIDEvent;
	if (x == 1)
	{

		if (m_rect.right > rect.right)
		{
			flag = 1;
		}
		if (m_rect.left < rect.left)
		{
			flag = 0;
		}
		if (flag == 0)
		{
			m_rect.right += 20;
			m_rect.left += 20;
		}
		if (flag == 1)
		{
			m_rect.left -= 20;
			m_rect.right -= 20;

		}
	}
	Invalidate();
}


void CCTest79View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDblClk(nFlags, point);
	x = 0;
}
