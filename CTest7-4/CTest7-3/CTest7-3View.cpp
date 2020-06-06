
// CTest7-3View.cpp : CCTest73View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest7-3.h"
#endif

#include "CTest7-3Doc.h"
#include "CTest7-3View.h"
//#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest73View

IMPLEMENT_DYNCREATE(CCTest73View, CView)

BEGIN_MESSAGE_MAP(CCTest73View, CView)
	ON_COMMAND(ID_POPOUT, &CCTest73View::OnPopout)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_SHOWHIDE, &CCTest73View::OnShowhide)
END_MESSAGE_MAP()

// CCTest73View ����/����

CCTest73View::CCTest73View()
{
	// TODO: �ڴ˴���ӹ������
	show_hide = 1;
    pD =NULL;

}

CCTest73View::~CCTest73View()
{
}

BOOL CCTest73View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest73View ����

void CCTest73View::OnDraw(CDC* /*pDC*/)
{
	CCTest73Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest73View ���

#ifdef _DEBUG
void CCTest73View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest73View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest73Doc* CCTest73View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest73Doc)));
	return (CCTest73Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest73View ��Ϣ�������


void CCTest73View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int r = dlg.DoModal();

	if (r == IDOK)
	{
		int X, Y, R;
		X = dlg.x;
		Y = dlg.y;
		R = dlg.r;

		CRect re(X - R, Y - R, X + R, Y + R);
		GetDC()->Ellipse(re);

	}
}


void CCTest73View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	pD = new MyDlg0;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);

	CView::OnLButtonDblClk(nFlags, point);
}


void CCTest73View::OnShowhide()
{
	// TODO: �ڴ���������������
	if (show_hide == 1)
		show_hide = 0;
	else
		show_hide = 1;
		pD->ShowWindow(show_hide);

}
