// REVISE.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest13-2���ݿ�֮��ɾ���.h"
#include "REVISE.h"
#include "afxdialogex.h"


// REVISE �Ի���

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


// REVISE ��Ϣ�������
