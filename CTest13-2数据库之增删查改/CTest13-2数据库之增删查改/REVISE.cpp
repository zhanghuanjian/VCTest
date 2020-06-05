// REVISE.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest13-2数据库之增删查改.h"
#include "REVISE.h"
#include "afxdialogex.h"


// REVISE 对话框

IMPLEMENT_DYNAMIC(REVISE, CDialogEx)

REVISE::REVISE(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, j(0)
{

}

REVISE::~REVISE()
{
}

void REVISE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, j);
}


BEGIN_MESSAGE_MAP(REVISE, CDialogEx)
END_MESSAGE_MAP()


// REVISE 消息处理程序
