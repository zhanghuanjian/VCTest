// ADD_DLG.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest13-2���ݿ�֮��ɾ���.h"
#include "ADD_DLG.h"
#include "afxdialogex.h"


// ADD_DLG �Ի���

IMPLEMENT_DYNAMIC(ADD_DLG, CDialogEx)

ADD_DLG::ADD_DLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADD, pParent)
	, i(0)
{

}

ADD_DLG::~ADD_DLG()
{
}

void ADD_DLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, i);
}


BEGIN_MESSAGE_MAP(ADD_DLG, CDialogEx)
END_MESSAGE_MAP()


// ADD_DLG ��Ϣ�������
