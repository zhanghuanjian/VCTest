
// CTest8-5Dlg.h : 头文件
//

#pragma once


// CCTest85Dlg 对话框
class CCTest85Dlg : public CDialogEx
{
// 构造
public:
	CCTest85Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CTEST85_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	//两个变量
	int x;
	int y;
	//加减乘
	int a;
	int b;
	int c;
	//除，开方
	double d;
	double e;
	double f;
	//提示信息,倒数
	
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
