#pragma once


// Traversal_Dlg �Ի���

class Traversal_Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Traversal_Dlg)

public:
	Traversal_Dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Traversal_Dlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int trav;
};
