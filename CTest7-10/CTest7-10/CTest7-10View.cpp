
// CTest7-10View.cpp : CCTest710View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest7-10.h"
#endif

#include "CTest7-10Doc.h"
#include "CTest7-10View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest710View

IMPLEMENT_DYNCREATE(CCTest710View, CView)

BEGIN_MESSAGE_MAP(CCTest710View, CView)
	ON_COMMAND(ID_POPOUT, &CCTest710View::OnPopout)
END_MESSAGE_MAP()

// CCTest710View ����/����

CCTest710View::CCTest710View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest710View::~CCTest710View()
{
}

BOOL CCTest710View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest710View ����

void CCTest710View::OnDraw(CDC* pDC)
{
	CCTest710Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
		
}


// CCTest710View ���

#ifdef _DEBUG
void CCTest710View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest710View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest710Doc* CCTest710View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest710Doc)));
	return (CCTest710Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest710View ��Ϣ�������


void CCTest710View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}
}
