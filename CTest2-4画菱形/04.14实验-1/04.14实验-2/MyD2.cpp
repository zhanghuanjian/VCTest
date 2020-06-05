// MyD2.cpp : 实现文件
//

#include "stdafx.h"
#include "04.14实验-2.h"
#include "MyD2.h"
#include "afxdialogex.h"


// MyD2 对话框

IMPLEMENT_DYNAMIC(MyD2, CDialogEx)

MyD2::MyD2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyD2::~MyD2()
{
}

void MyD2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, Lbox);
}


BEGIN_MESSAGE_MAP(MyD2, CDialogEx)
	ON_LBN_SELCHANGE(IDC_LIST2, &MyD2::OnLbnSelchangeList2)
	ON_BN_CLICKED(IDC_BUTTON1, &MyD2::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyD2 消息处理程序


void MyD2::OnLbnSelchangeList2()
{
	// TODO: 在此添加控件通知处理程序代码
}


BOOL MyD2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	s = "";
	Lbox.AddString(_T("异常: OCX 属性页应返回 FALSE"));
	Lbox.AddString(_T("TODO:  在此添加额外的初始化"));

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void MyD2::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	int n = Lbox.GetCurSel();//取得所选的列号数
	Lbox.GetText(n, s);
}
