
// CTest9-3动态加载(居中)Dlg.h : 头文件
//

#pragma once


// CCTest93动态加载居中Dlg 对话框
class CCTest93动态加载居中Dlg : public CDialogEx
{
// 构造
public:
	CCTest93动态加载居中Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CTEST93_DIALOG };
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
	afx_msg void OnBnClickedButton1();
	void foo(CImage & img, int & sx, int & sy, int & w, int & h);
	
};
