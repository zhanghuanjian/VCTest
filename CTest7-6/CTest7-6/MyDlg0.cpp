// MyDlg0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest7-6.h"
#include "MyDlg0.h"
#include "afxdialogex.h"


// MyDlg0 �Ի���

IMPLEMENT_DYNAMIC(MyDlg0, CDialogEx)

MyDlg0::MyDlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(_T(""))
	, y(_T(""))
{

}

MyDlg0::~MyDlg0()
{
}

void MyDlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
}


BEGIN_MESSAGE_MAP(MyDlg0, CDialogEx)
	ON_BN_CLICKED(ID_WIZNEXT, &MyDlg0::OnBnClickedWiznext)
END_MESSAGE_MAP()


// MyDlg0 ��Ϣ�������


void MyDlg0::OnBnClickedWiznext()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString  s;
	this->UpdateData(true);
	s = x;
	x = y;
	y = s;
	UpdateData(false);
}
