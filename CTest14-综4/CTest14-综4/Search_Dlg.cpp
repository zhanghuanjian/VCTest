// Search_Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest14-综4.h"
#include "Search_Dlg.h"
#include "afxdialogex.h"


// Search_Dlg 对话框

IMPLEMENT_DYNAMIC(Search_Dlg, CDialogEx)

Search_Dlg::Search_Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, search(0)
{

}

Search_Dlg::~Search_Dlg()
{
}

void Search_Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Search_Dlg, CDialogEx)
END_MESSAGE_MAP()


// Search_Dlg 消息处理程序
