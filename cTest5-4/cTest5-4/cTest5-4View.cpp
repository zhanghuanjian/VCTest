
// cTest5-4View.cpp : CcTest54View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "cTest5-4.h"
#endif

#include "cTest5-4Doc.h"
#include "cTest5-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CcTest54View

IMPLEMENT_DYNCREATE(CcTest54View, CView)

BEGIN_MESSAGE_MAP(CcTest54View, CView)
	ON_COMMAND(ID_DRAWCIRCLE, &CcTest54View::OnDrawcircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CcTest54View ����/����

CcTest54View::CcTest54View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	N = 5;

}

CcTest54View::~CcTest54View()
{
}

BOOL CcTest54View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CcTest54View ����

void CcTest54View::OnDraw(CDC* /*pDC*/)
{
	CcTest54Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CcTest54View ���

#ifdef _DEBUG
void CcTest54View::AssertValid() const
{
	CView::AssertValid();
}

void CcTest54View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CcTest54Doc* CcTest54View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CcTest54Doc)));
	return (CcTest54Doc*)m_pDocument;
}
#endif //_DEBUG


// CcTest54View ��Ϣ�������


void CcTest54View::OnDrawcircle()
{
	// TODO: �ڴ���������������
	GetClientRect(&m_window);
	int x1 = (m_window.left + m_window.right) / 2;
	int x2 = (m_window.bottom + m_window.top) / 2;
	GetClientRect(&cr);
	CClientDC DC(this);
	cr.left = x1 - 50;
	cr.right = x1 + 50;
	cr.top = x2 - 50;
	cr.bottom = x2 + 50;

	if (set)
	{
		for (int i = 0; i < N; i++)
		{

			SetTimer(i, 200, NULL);
		}
		set = false;
	}
}


void CcTest54View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CClientDC dc(this);
	int i = nIDEvent;
	cr.left -= 5;
	cr.right += 5;
	cr.top -= 5;
	cr.bottom += 5;

	dc.Ellipse(cr);
	CPen pen(PS_SOLID, 20, RGB(rand() % 150, rand() % 150, rand() % 150));
	CPen* color;
	color = dc.SelectObject(&pen);
	dc.Ellipse(cr);

	CView::OnTimer(nIDEvent);
}
