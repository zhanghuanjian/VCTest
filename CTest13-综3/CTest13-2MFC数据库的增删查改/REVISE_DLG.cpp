// REVISE_DLG.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest13-2MFC���ݿ����ɾ���.h"
#include "REVISE_DLG.h"
#include "afxdialogex.h"


// REVISE_DLG �Ի���

IMPLEMENT_DYNAMIC(REVISE_DLG, CDialogEx)

REVISE_DLG::REVISE_DLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_REVISE, pParent)
	, b(0)
{

}

REVISE_DLG::~REVISE_DLG()
{
}

void REVISE_DLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, b);
}


BEGIN_MESSAGE_MAP(REVISE_DLG, CDialogEx)
END_MESSAGE_MAP()


// REVISE_DLG ��Ϣ�������
