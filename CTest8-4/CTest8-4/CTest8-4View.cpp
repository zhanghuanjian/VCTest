
// CTest8-4View.cpp : CCTest84View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest8-4.h"
#endif

#include "CTest8-4Doc.h"
#include "CTest8-4View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest84View

IMPLEMENT_DYNCREATE(CCTest84View, CView)

BEGIN_MESSAGE_MAP(CCTest84View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &CCTest84View::OnPopout)
END_MESSAGE_MAP()

// CCTest84View ����/����

CCTest84View::CCTest84View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest84View::~CCTest84View()
{
}

BOOL CCTest84View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest84View ����

void CCTest84View::OnDraw(CDC* /*pDC*/)
{
	CCTest84Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest84View ���

#ifdef _DEBUG
void CCTest84View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest84View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest84Doc* CCTest84View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest84Doc)));
	return (CCTest84Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest84View ��Ϣ�������


void CCTest84View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CFileDialog cfd(true);
	CClientDC dc(this);

	int r = cfd.DoModal();
	if (r == IDOK)
	{
		filename = cfd.GetPathName();
		dc.TextOutW(30, 30, filename);

	}


	CView::OnLButtonDblClk(nFlags, point);
}


void CCTest84View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	CClientDC dc(this);

	int r = dlg.DoModal();
	dlg.x = filename;
	if (r== IDOK)
	{

	}
}
