// MyDlg0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest7-2.h"
#include "MyDlg0.h"
#include "afxdialogex.h"


// MyDlg0 �Ի���

IMPLEMENT_DYNAMIC(MyDlg0, CDialogEx)

MyDlg0::MyDlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, r(0)
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
	DDX_Text(pDX, IDC_EDIT3, r);
	DDV_MinMaxInt(pDX, r, 0, 500);
}


BEGIN_MESSAGE_MAP(MyDlg0, CDialogEx)
END_MESSAGE_MAP()


// MyDlg0 ��Ϣ�������
