
// CTest7-1View.cpp : CCTest71View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest7-1.h"
#endif

#include "CTest7-1Doc.h"
#include "CTest7-1View.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest71View

IMPLEMENT_DYNCREATE(CCTest71View, CView)

BEGIN_MESSAGE_MAP(CCTest71View, CView)
	ON_COMMAND(ID_POPOUT, &CCTest71View::OnPopout)
END_MESSAGE_MAP()

// CCTest71View ����/����

CCTest71View::CCTest71View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest71View::~CCTest71View()
{
}

BOOL CCTest71View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest71View ����

void CCTest71View::OnDraw(CDC* /*pDC*/)
{
	CCTest71Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest71View ���

#ifdef _DEBUG
void CCTest71View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest71View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest71Doc* CCTest71View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest71Doc)));
	return (CCTest71Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest71View ��Ϣ�������


//�˵����µ����Ի���Բ
void CCTest71View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int r = dlg.DoModal();

	if (r == IDOK)
	{
		int R, X, Y;
		R = dlg.r;
		X = dlg.x;
		Y = dlg.y;

		CRect re(X - R, Y - R, X + R, Y + R);//�������,���ݾ��λ�Բ
		GetDC()->Ellipse(re);
	}
}
