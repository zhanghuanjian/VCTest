#pragma once


// REVISE �Ի���

class REVISE : public CDialogEx
{
	DECLARE_DYNAMIC(REVISE)

public:
	REVISE(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~REVISE();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long j;
};
