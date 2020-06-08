
// CTest14-��4View.cpp : CCTest14��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest14-��4.h"
#endif

#include "CTest14-��4Set.h"
#include "CTest14-��4Doc.h"
#include "CTest14-��4View.h"
#include"MyDlg.h"

#include "targetver.h"

#include"Search_Dlg.h"
#include"Sort_Dlg.h"
#include"Traversal_Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest14��4View

IMPLEMENT_DYNCREATE(CCTest14��4View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest14��4View, CRecordView)
	ON_COMMAND(ID_SEARCH, &CCTest14��4View::OnSearch)
	ON_COMMAND(ID_SORT, &CCTest14��4View::OnSort)
	ON_COMMAND(ID_TRAVERSAL, &CCTest14��4View::OnTraversal)
END_MESSAGE_MAP()

// CCTest14��4View ����/����

CCTest14��4View::CCTest14��4View()
	: CRecordView(IDD_CTEST144_FORM)
	, a(_T(""))
	, b(_T(""))
	, c(_T(""))
	, d(_T(""))
	, e(_T(""))
	, f(_T(""))
	, g(_T(""))
	, h(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CCTest14��4View::~CCTest14��4View()
{
}

void CCTest14��4View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
	DDX_Text(pDX, IDC_EDIT8, m_pSet->column8);
}

BOOL CCTest14��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CCTest14��4View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest14��4Set;
	CRecordView::OnInitialUpdate();

}


// CCTest14��4View ���

#ifdef _DEBUG
void CCTest14��4View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest14��4View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest14��4Doc* CCTest14��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest14��4Doc)));
	return (CCTest14��4Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest14��4View ���ݿ�֧��
CRecordset* CCTest14��4View::OnGetRecordset()
{
	return m_pSet;
}



// CCTest14��4View ��Ϣ�������


void CCTest14��4View::OnSearch()
{
	// TODO: �ڴ���������������
	Search_Dlg re_dlg;
	int t = re_dlg.DoModal();
	if (t == IDOK)
	{

		m_pSet->m_strFilter.Format(_T("%s"), re_dlg.search);
		m_pSet->Requery();
		UpdateData(false);
	}
}


void CCTest14��4View::OnSort()
{
	// TODO: �ڴ���������������
	Search_Dlg re_dlg;
	int t = re_dlg.DoModal();
	if (t == IDOK)
	{

		m_pSet->m_strFilter.Format(_T("%s"), re_dlg.search);
		m_pSet->Requery();
		UpdateData(false);
	}
}


void CCTest14��4View::OnTraversal()
{
	// TODO: �ڴ���������������
	Traversal_Dlg dlg;
	int n, i;
	CString str, s;

	m_pSet->MoveFirst();
	while (!m_pSet->IsEOF())

	{
		n = m_pSet->GetODBCFieldCount();


		for (i = 1; i < n; i++)
		{
			m_pSet->GetFieldValue((short)i, str);
			s += _T(" ") + str;
		}
		s += _T("\r\n");
		dlg.trav = s;
		UpdateData(false);
		m_pSet->MoveNext();
	}
	if (dlg.DoModal() == IDOK)
	{

	}
}
