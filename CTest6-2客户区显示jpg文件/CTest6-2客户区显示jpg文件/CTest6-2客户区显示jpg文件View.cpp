
// CTest6-2�ͻ�����ʾjpg�ļ�View.cpp : CCTest62�ͻ�����ʾjpg�ļ�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest6-2�ͻ�����ʾjpg�ļ�.h"
#endif

#include "CTest6-2�ͻ�����ʾjpg�ļ�Doc.h"
#include "CTest6-2�ͻ�����ʾjpg�ļ�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest62�ͻ�����ʾjpg�ļ�View

IMPLEMENT_DYNCREATE(CCTest62�ͻ�����ʾjpg�ļ�View, CView)

BEGIN_MESSAGE_MAP(CCTest62�ͻ�����ʾjpg�ļ�View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CCTest62�ͻ�����ʾjpg�ļ�View::OnFileOpen)
END_MESSAGE_MAP()

// CCTest62�ͻ�����ʾjpg�ļ�View ����/����

CCTest62�ͻ�����ʾjpg�ļ�View::CCTest62�ͻ�����ʾjpg�ļ�View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest62�ͻ�����ʾjpg�ļ�View::~CCTest62�ͻ�����ʾjpg�ļ�View()
{
}

BOOL CCTest62�ͻ�����ʾjpg�ļ�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest62�ͻ�����ʾjpg�ļ�View ����

void CCTest62�ͻ�����ʾjpg�ļ�View::OnDraw(CDC* /*pDC*/)
{
	CCTest62�ͻ�����ʾjpg�ļ�Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest62�ͻ�����ʾjpg�ļ�View ���

#ifdef _DEBUG
void CCTest62�ͻ�����ʾjpg�ļ�View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest62�ͻ�����ʾjpg�ļ�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest62�ͻ�����ʾjpg�ļ�Doc* CCTest62�ͻ�����ʾjpg�ļ�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest62�ͻ�����ʾjpg�ļ�Doc)));
	return (CCTest62�ͻ�����ʾjpg�ļ�Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest62�ͻ�����ʾjpg�ļ�View ��Ϣ�������


void CCTest62�ͻ�����ʾjpg�ļ�View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);//true�Ǵ��ļ�,false�����Ϊ
	int r = cfd.DoModal();//ģʽ�Ի���
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();//��ȡ·��
		dc.TextOutW(10, 10, filename);//����ļ���

		CImage img;
		img.Destroy();//���ڴ�й¶
		img.Load(filename);
		img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());

	}

}
