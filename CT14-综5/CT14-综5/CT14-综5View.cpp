
// CT14-��5View.cpp : CCT14��5View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CT14-��5.h"
#endif

#include "CT14-��5Set.h"
#include "CT14-��5Doc.h"
#include "CT14-��5View.h"
#include"MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCT14��5View

IMPLEMENT_DYNCREATE(CCT14��5View, CRecordView)

BEGIN_MESSAGE_MAP(CCT14��5View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CCT14��5View::OnRecordFirst)
	ON_BN_CLICKED(IDC_BUTTON1, &CCT14��5View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CCT14��5View ����/����

CCT14��5View::CCT14��5View()
	: CRecordView(IDD_CT145_FORM)
	, m_jpg(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CCT14��5View::~CCT14��5View()
{
}

void CCT14��5View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column8);
}

BOOL CCT14��5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CCT14��5View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CT14��5Set;
	CRecordView::OnInitialUpdate();

}


// CCT14��5View ���

#ifdef _DEBUG
void CCT14��5View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCT14��5View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCT14��5Doc* CCT14��5View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCT14��5Doc)));
	return (CCT14��5Doc*)m_pDocument;
}
#endif //_DEBUG


// CCT14��5View ���ݿ�֧��
CRecordset* CCT14��5View::OnGetRecordset()
{
	return m_pSet;
}



// CCT14��5View ��Ϣ�������



void CCT14��5View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	
}


void CCT14��5View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

}
