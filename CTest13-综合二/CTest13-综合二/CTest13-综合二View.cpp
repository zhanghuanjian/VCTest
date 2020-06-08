
// CTest13-�ۺ϶�View.cpp : CCTest13�ۺ϶�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest13-�ۺ϶�.h"
#endif

#include "CTest13-�ۺ϶�Set.h"
#include "CTest13-�ۺ϶�Doc.h"
#include "CTest13-�ۺ϶�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest13�ۺ϶�View

IMPLEMENT_DYNCREATE(CCTest13�ۺ϶�View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest13�ۺ϶�View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CCTest13�ۺ϶�View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CCTest13�ۺ϶�View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CCTest13�ۺ϶�View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CCTest13�ۺ϶�View::OnRecordLast)
END_MESSAGE_MAP()

// CCTest13�ۺ϶�View ����/����

CCTest13�ۺ϶�View::CCTest13�ۺ϶�View()
	: CRecordView(IDD_CTEST13_FORM)
	, pathname(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path=_T("D:\\MFC���ݿ�\\�ۺ�ʵ��1 - ��Ƭ\\");
}

CCTest13�ۺ϶�View::~CCTest13�ۺ϶�View()
{
}

void CCTest13�ۺ϶�View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL CCTest13�ۺ϶�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CCTest13�ۺ϶�View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest13�ۺ϶�Set;
	CRecordView::OnInitialUpdate();

}


// CCTest13�ۺ϶�View ���

#ifdef _DEBUG
void CCTest13�ۺ϶�View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest13�ۺ϶�View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest13�ۺ϶�Doc* CCTest13�ۺ϶�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest13�ۺ϶�Doc)));
	return (CCTest13�ۺ϶�Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest13�ۺ϶�View ���ݿ�֧��
CRecordset* CCTest13�ۺ϶�View::OnGetRecordset()
{
	return m_pSet;
}



// CCTest13�ۺ϶�View ��Ϣ�������
void CCTest13�ۺ϶�View::draw_pic(CString file) {
	CImage img;
	img.Load(file);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}

void CCTest13�ۺ϶�View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	draw_pic(filename);
}


void CCTest13�ۺ϶�View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	draw_pic(filename);
}


void CCTest13�ۺ϶�View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	draw_pic(filename);
}


void CCTest13�ۺ϶�View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	draw_pic(filename);
}
