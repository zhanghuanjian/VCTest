#pragma once


// Sort_Dlg �Ի���

class Sort_Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Sort_Dlg)

public:
	Sort_Dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Sort_Dlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
