// Traversal_Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest14-��4.h"
#include "Traversal_Dlg.h"
#include "afxdialogex.h"


// Traversal_Dlg �Ի���

IMPLEMENT_DYNAMIC(Traversal_Dlg, CDialogEx)

Traversal_Dlg::Traversal_Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG3, pParent)
	, trav(0)
{

}

Traversal_Dlg::~Traversal_Dlg()
{
}

void Traversal_Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Traversal_Dlg, CDialogEx)
END_MESSAGE_MAP()


// Traversal_Dlg ��Ϣ�������
