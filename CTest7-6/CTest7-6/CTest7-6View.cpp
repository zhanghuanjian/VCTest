
// CTest7-6View.cpp : CCTest76View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest7-6.h"
#endif

#include "CTest7-6Doc.h"
#include "CTest7-6View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest76View

IMPLEMENT_DYNCREATE(CCTest76View, CView)

BEGIN_MESSAGE_MAP(CCTest76View, CView)
	ON_COMMAND(ID_ExString, &CCTest76View::OnExstring)
END_MESSAGE_MAP()

// CCTest76View ����/����

CCTest76View::CCTest76View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest76View::~CCTest76View()
{
}

BOOL CCTest76View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest76View ����

void CCTest76View::OnDraw(CDC* /*pDC*/)
{
	CCTest76Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest76View ���

#ifdef _DEBUG
void CCTest76View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest76View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest76Doc* CCTest76View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest76Doc)));
	return (CCTest76Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest76View ��Ϣ�������


void CCTest76View::OnExstring()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}
}
