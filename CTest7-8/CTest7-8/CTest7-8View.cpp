
// CTest7-8View.cpp : CCTest78View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest7-8.h"
#endif

#include "CTest7-8Doc.h"
#include "CTest7-8View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest78View

IMPLEMENT_DYNCREATE(CCTest78View, CView)

BEGIN_MESSAGE_MAP(CCTest78View, CView)
	ON_COMMAND(ID_POPOUT, &CCTest78View::OnPopout)
END_MESSAGE_MAP()

// CCTest78View ����/����

CCTest78View::CCTest78View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest78View::~CCTest78View()
{
}

BOOL CCTest78View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest78View ����

void CCTest78View::OnDraw(CDC* /*pDC*/)
{
	CCTest78Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest78View ���

#ifdef _DEBUG
void CCTest78View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest78View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest78Doc* CCTest78View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest78Doc)));
	return (CCTest78Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest78View ��Ϣ�������


void CCTest78View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{

	}

}
