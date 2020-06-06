
// CTest5-5View.cpp : CCTest55View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest5-5.h"
#endif

#include "CTest5-5Doc.h"
#include "CTest5-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest55View

IMPLEMENT_DYNCREATE(CCTest55View, CView)

BEGIN_MESSAGE_MAP(CCTest55View, CView)
	ON_COMMAND(ID_LINE, &CCTest55View::OnLine)
	ON_COMMAND(ID_RECTANGLE, &CCTest55View::OnRectangle)
	ON_COMMAND(ID_ELLIPSE, &CCTest55View::OnEllipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CCTest55View ����/����

CCTest55View::CCTest55View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest55View::~CCTest55View()
{
}

BOOL CCTest55View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest55View ����

void CCTest55View::OnDraw(CDC* /*pDC*/)
{
	CCTest55Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest55View ���

#ifdef _DEBUG
void CCTest55View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest55View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest55Doc* CCTest55View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest55Doc)));
	return (CCTest55Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest55View ��Ϣ�������


void CCTest55View::OnLine()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	set = 1;
	CPen pen(PS_SOLID, 5, RGB(0, 0, 0));
	CPen* oldPen = dc.SelectObject(&pen);
}


void CCTest55View::OnRectangle()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	set = 2;
	GetClientRect(&m_Crect);
}


void CCTest55View::OnEllipse()
{
	// TODO: �ڴ���������������
	set = 3;
}


void CCTest55View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	m_point.x = point.x;
	m_point.y = point.y;
}


void CCTest55View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonUp(nFlags, point);
	CClientDC dc(this);
	CView::OnLButtonUp(nFlags, point);
	n_point.x = point.x;
	n_point.y = point.y;
	switch (set)
	{
	case 1:
		dc.MoveTo(n_point.x, n_point.y);
		dc.LineTo(m_point.x, m_point.y);
		break;
	case 2:
		m_Crect.left = m_point.x;
		m_Crect.top = m_point.y;
		m_Crect.right = n_point.x;
		m_Crect.bottom = n_point.y;
		dc.Rectangle(m_Crect);
		break;
	case 3:
		m_Crect.left = m_point.x;
		m_Crect.top = m_point.y;
		m_Crect.right = n_point.x;
		m_Crect.bottom = n_point.y;
		dc.Ellipse(m_Crect);
		break;
	default:
		break;
	}
}
