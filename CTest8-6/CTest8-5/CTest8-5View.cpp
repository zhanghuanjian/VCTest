
// CTest8-5View.cpp : CCTest85View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest8-5.h"
#endif

#include "CTest8-5Doc.h"
#include "CTest8-5View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest85View

IMPLEMENT_DYNCREATE(CCTest85View, CView)

BEGIN_MESSAGE_MAP(CCTest85View, CView)
	ON_COMMAND(ID_ELLIPSE, &CCTest85View::OnEllipse)
END_MESSAGE_MAP()

// CCTest85View ����/����

CCTest85View::CCTest85View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest85View::~CCTest85View()
{
}

BOOL CCTest85View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest85View ����

void CCTest85View::OnDraw(CDC* /*pDC*/)
{
	CCTest85Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest85View ���

#ifdef _DEBUG
void CCTest85View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest85View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest85Doc* CCTest85View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest85Doc)));
	return (CCTest85Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest85View ��Ϣ�������


void CCTest85View::OnEllipse()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int X, Y, A, B;
		X = dlg.x;
		Y = dlg.y;
		A = dlg.a;
		B = dlg.b;
		CRect rect(X - A, Y - B, X + A, Y + B);
		GetDC()->Ellipse(rect);

	}
}
