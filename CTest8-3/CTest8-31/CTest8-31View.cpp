
// CTest8-31View.cpp : CCTest831View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest8-31.h"
#endif

#include "CTest8-31Doc.h"
#include "CTest8-31View.h"
#include"MyDlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest831View

IMPLEMENT_DYNCREATE(CCTest831View, CView)

BEGIN_MESSAGE_MAP(CCTest831View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_OPENFILE, &CCTest831View::OnOpenfile)
END_MESSAGE_MAP()

// CCTest831View ����/����

CCTest831View::CCTest831View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest831View::~CCTest831View()
{
}

BOOL CCTest831View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest831View ����

void CCTest831View::OnDraw(CDC* /*pDC*/)
{
	CCTest831Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest831View ���

#ifdef _DEBUG
void CCTest831View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest831View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest831Doc* CCTest831View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest831Doc)));
	return (CCTest831Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest831View ��Ϣ�������


void CCTest831View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDblClk(nFlags, point);
	CFileDialog cfd(true);
	CClientDC dc(this);
	int r = cfd.DoModal();

	if (r == IDOK)
	{
		filename = cfd.GetPathName();
		dc.TextOutW(30, 30, filename);

	}
}


void CCTest831View::OnOpenfile()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	CClientDC dc(this);
	dlg.x = filename;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}

}
