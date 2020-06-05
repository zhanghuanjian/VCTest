#pragma once
#include "afxwin.h"


// MyD2 对话框

class MyD2 : public CDialogEx
{
	DECLARE_DYNAMIC(MyD2)

public:
	MyD2(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyD2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLbnSelchangeList2();
	CListBox Lbox;
	CString s;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
};
