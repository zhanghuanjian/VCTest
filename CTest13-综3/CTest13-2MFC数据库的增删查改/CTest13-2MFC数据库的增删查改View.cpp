
// CTest13-2MFC���ݿ����ɾ���View.cpp : CCTest132MFC���ݿ����ɾ���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest13-2MFC���ݿ����ɾ���.h"
#include"ADD_DLG.h"
#include"REVISE_DLG.h"

#endif

#include "CTest13-2MFC���ݿ����ɾ���Set.h"
#include "CTest13-2MFC���ݿ����ɾ���Doc.h"
#include "CTest13-2MFC���ݿ����ɾ���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest132MFC���ݿ����ɾ���View

IMPLEMENT_DYNCREATE(CCTest132MFC���ݿ����ɾ���View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest132MFC���ݿ����ɾ���View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &CCTest132MFC���ݿ����ɾ���View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &CCTest132MFC���ݿ����ɾ���View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CCTest132MFC���ݿ����ɾ���View::OnBnClickedButton2)
END_MESSAGE_MAP()

// CCTest132MFC���ݿ����ɾ���View ����/����

CCTest132MFC���ݿ����ɾ���View::CCTest132MFC���ݿ����ɾ���View()
	: CRecordView(IDD_CTEST132MFC_FORM)
	, i(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CCTest132MFC���ݿ����ɾ���View::~CCTest132MFC���ݿ����ɾ���View()
{
}

void CCTest132MFC���ݿ����ɾ���View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL CCTest132MFC���ݿ����ɾ���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CCTest132MFC���ݿ����ɾ���View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest132MFC���ݿ����ɾ���Set;
	CRecordView::OnInitialUpdate();

}


// CCTest132MFC���ݿ����ɾ���View ���

#ifdef _DEBUG
void CCTest132MFC���ݿ����ɾ���View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest132MFC���ݿ����ɾ���View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest132MFC���ݿ����ɾ���Doc* CCTest132MFC���ݿ����ɾ���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest132MFC���ݿ����ɾ���Doc)));
	return (CCTest132MFC���ݿ����ɾ���Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest132MFC���ݿ����ɾ���View ���ݿ�֧��
CRecordset* CCTest132MFC���ݿ����ɾ���View::OnGetRecordset()
{
	return m_pSet;
}



// CCTest132MFC���ݿ����ɾ���View ��Ϣ�������


void CCTest132MFC���ݿ����ɾ���View::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
}


void CCTest132MFC���ݿ����ɾ���View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ADD_DLG adddlg;
	int r = adddlg.DoModal();
	if (r == IDOK)
	{
		long aa = adddlg.a;
		m_pSet->AddNew();
		m_pSet->m_1 = aa;
		m_pSet->Update();
		UpdateData(false);

	}
}


void CCTest132MFC���ݿ����ɾ���View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	REVISE_DLG revise;
	int r = revise.DoModal();
	if (r == IDOK)
	{
		long bb = revise.b;
		m_pSet->Edit();
		m_pSet->m_1 = bb;
		m_pSet->Update();
		UpdateData(false);

	}

}
