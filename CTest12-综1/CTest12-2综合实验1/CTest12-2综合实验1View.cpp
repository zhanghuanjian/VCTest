
// CTest12-2�ۺ�ʵ��1View.cpp : CCTest122�ۺ�ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest12-2�ۺ�ʵ��1.h"
#endif

#include "CTest12-2�ۺ�ʵ��1Set.h"
#include "CTest12-2�ۺ�ʵ��1Doc.h"
#include "CTest12-2�ۺ�ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest122�ۺ�ʵ��1View

IMPLEMENT_DYNCREATE(CCTest122�ۺ�ʵ��1View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest122�ۺ�ʵ��1View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CCTest122�ۺ�ʵ��1View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CCTest122�ۺ�ʵ��1View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CCTest122�ۺ�ʵ��1View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CCTest122�ۺ�ʵ��1View::OnRecordLast)
END_MESSAGE_MAP()

// CCTest122�ۺ�ʵ��1View ����/����

CCTest122�ۺ�ʵ��1View::CCTest122�ۺ�ʵ��1View()
	: CRecordView(IDD_CTEST1221_FORM)
	, i(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("D:\\MFC���ݿ�\\�ۺ�ʵ��1-��Ƭ");

}

CCTest122�ۺ�ʵ��1View::~CCTest122�ۺ�ʵ��1View()
{
}

void CCTest122�ۺ�ʵ��1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_STATIC, m_pSet->m_1);
}

BOOL CCTest122�ۺ�ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CCTest122�ۺ�ʵ��1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest122�ۺ�ʵ��1Set;
	CRecordView::OnInitialUpdate();

}


// CCTest122�ۺ�ʵ��1View ���

#ifdef _DEBUG
void CCTest122�ۺ�ʵ��1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest122�ۺ�ʵ��1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest122�ۺ�ʵ��1Doc* CCTest122�ۺ�ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest122�ۺ�ʵ��1Doc)));
	return (CCTest122�ۺ�ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest122�ۺ�ʵ��1View ���ݿ�֧��
CRecordset* CCTest122�ۺ�ʵ��1View::OnGetRecordset()
{
	return m_pSet;
}



// CCTest122�ۺ�ʵ��1View ��Ϣ�������


void CCTest122�ۺ�ʵ��1View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);

	CString filename, s;
	GetDlgItemText(IDC_STATIC, s);
	filename = path + s;
	draw_pic(filename);

}


void CCTest122�ۺ�ʵ��1View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);

	/*CString filename, s;
	GetDlgItemText(IDC_STATIC, s);
	filename = path + s;
	draw_pic(filename);*/

}


void CCTest122�ۺ�ʵ��1View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if(m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);

	/*CString filename, s;
	GetDlgItemText(IDC_STATIC, s);
	filename = path + s;
	draw_pic(filename);*/


}


void CCTest122�ۺ�ʵ��1View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);

	/*CString filename, s;
	GetDlgItemText(IDC_STATIC, s);
	filename = path + s;
	draw_pic(filename);*/

}

void CCTest122�ۺ�ʵ��1View::draw_pic(CString file)
{
	CImage img;
	img.Load(file);
	CDC* pDC = GetDlgItem(IDD_CTEST1221_FORM)->GetDC();
	CClientDC dc(this);
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDD_CTEST1221_FORM)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	
	if (rect_ratio > img_ratio)
	{
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
	img.Draw(dc.m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
	Invalidate();

	}