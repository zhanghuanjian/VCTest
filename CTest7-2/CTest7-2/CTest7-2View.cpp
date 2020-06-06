
// CTest7-2View.cpp : CCTest72View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest7-2.h"
#endif

#include "CTest7-2Doc.h"
#include "CTest7-2View.h"
#include"MyDlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest72View

IMPLEMENT_DYNCREATE(CCTest72View, CView)

BEGIN_MESSAGE_MAP(CCTest72View, CView)
	ON_COMMAND(ID_POPOUT, &CCTest72View::OnPopout)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CCTest72View ����/����

CCTest72View::CCTest72View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest72View::~CCTest72View()
{
}

BOOL CCTest72View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest72View ����

void CCTest72View::OnDraw(CDC* /*pDC*/)
{
	CCTest72Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest72View ���

#ifdef _DEBUG
void CCTest72View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest72View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest72Doc* CCTest72View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest72Doc)));
	return (CCTest72Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest72View ��Ϣ�������


void CCTest72View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int t = dlg.DoModal();

	if (t == IDOK)
	{
		int X, Y, R;
		X = dlg.x;
		Y = dlg.y;
		R = dlg.r;
		CRect re(X - R, Y - R, X + R, Y + R);
		GetDC()->Ellipse(re);
	}
}

//˫�������Ի���
void CCTest72View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyDlg0 *pD = new MyDlg0;  //��new������Ի������
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);

	CView::OnLButtonDblClk(nFlags, point);
}
