#pragma once


// REVISE_DLG �Ի���

class REVISE_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(REVISE_DLG)

public:
	REVISE_DLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~REVISE_DLG();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_REVISE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long b;
};
