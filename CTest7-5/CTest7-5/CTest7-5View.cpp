
// CTest7-5View.cpp : CCTest75View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest7-5.h"
#endif

#include "CTest7-5Doc.h"
#include "CTest7-5View.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest75View

IMPLEMENT_DYNCREATE(CCTest75View, CView)

BEGIN_MESSAGE_MAP(CCTest75View, CView)
	ON_COMMAND(ID_POPOUT, &CCTest75View::OnPopout)
END_MESSAGE_MAP()

// CCTest75View ����/����

CCTest75View::CCTest75View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest75View::~CCTest75View()
{
}

BOOL CCTest75View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest75View ����

void CCTest75View::OnDraw(CDC* /*pDC*/)
{
	CCTest75Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest75View ���

#ifdef _DEBUG
void CCTest75View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest75View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest75Doc* CCTest75View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest75Doc)));
	return (CCTest75Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest75View ��Ϣ�������


void CCTest75View::OnPopout()
{
	// TODO: �ڴ���������������
	CString s = _T("�����˳��Ի���!");
	MyDlg0 dlg;
	int r = dlg.DoModal();
	
	CClientDC dc(this);

	if (r == IDOK)
	{
		dc.TextOutW(200, 100, s);
	}

}
