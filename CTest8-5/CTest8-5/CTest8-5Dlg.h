
// CTest8-5Dlg.h : ͷ�ļ�
//

#pragma once


// CCTest85Dlg �Ի���
class CCTest85Dlg : public CDialogEx
{
// ����
public:
	CCTest85Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CTEST85_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	//��������
	int x;
	int y;
	//�Ӽ���
	int a;
	int b;
	int c;
	//��������
	double d;
	double e;
	double f;
	//��ʾ��Ϣ,����
	
	CString q;
	CString w;

	CString g;
	CString h;

	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	
};
