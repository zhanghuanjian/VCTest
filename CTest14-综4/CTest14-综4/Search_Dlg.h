#pragma once


// Search_Dlg �Ի���

class Search_Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Search_Dlg)

public:
	Search_Dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Search_Dlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int search;
};
