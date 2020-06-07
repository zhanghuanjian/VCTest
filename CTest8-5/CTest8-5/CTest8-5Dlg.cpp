
// CTest8-5Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest8-5.h"
#include "CTest8-5Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CCTest85Dlg �Ի���



CCTest85Dlg::CCTest85Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_CTEST85_DIALOG, pParent)
	, x(0)
	, y(0)
	, a(0)
	, b(0)
	, c(0)
	, d(0.0)
	, e(0.0)
	, f(0.0)
	, g(_T(""))
	, h(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCTest85Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, a);
	DDX_Text(pDX, IDC_EDIT4, b);
	DDX_Text(pDX, IDC_EDIT5, c);
	DDX_Text(pDX, IDC_EDIT6, d);
	DDX_Text(pDX, IDC_EDIT7, e);
	DDX_Text(pDX, IDC_EDIT8, f);
	DDX_Text(pDX, IDC_EDIT11, g);
	DDX_Text(pDX, IDC_EDIT12, h);
}

BEGIN_MESSAGE_MAP(CCTest85Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CCTest85Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CCTest85Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CCTest85Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CCTest85Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CCTest85Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CCTest85Dlg::OnBnClickedButton6)
END_MESSAGE_MAP()


// CCTest85Dlg ��Ϣ�������

BOOL CCTest85Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CCTest85Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CCTest85Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CCTest85Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CCTest85Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	a = x + y;
	UpdateData(false);
}


void CCTest85Dlg::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	b = x - y;
	UpdateData(false);
}


void CCTest85Dlg::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	c = x * y;
	UpdateData(false);
}



void CCTest85Dlg::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	CString s = _T("��������Ϊ0");
	UpdateData(true);

	if (y == 0)
	{
		q = s;
	}
	else
	{
		d =(double)x / y;
	}
	UpdateData(false);
}


void CCTest85Dlg::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	CString s = _T("��������Ϊ0");
	UpdateData(true);
	if (x == 0 || y == 0)
	{
		w = s;
	}
	else
	{
		e = sqrt(x);
		f = sqrt(y);
	}
	UpdateData(false);
}


void CCTest85Dlg::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	if (x == 0)
	{
		g = "�������������";
		h = "�������������";
	}

	else
	{
		g.Format(_T("1/%d"), x);
		h.Format(_T("1/%d"), y);
	}
	UpdateData(false);
}
