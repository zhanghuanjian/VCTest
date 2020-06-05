#pragma once


// REVISE_DLG 对话框

class REVISE_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(REVISE_DLG)

public:
	REVISE_DLG(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~REVISE_DLG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_REVISE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	long b;
};
