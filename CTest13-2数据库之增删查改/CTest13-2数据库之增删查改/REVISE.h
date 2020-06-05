#pragma once


// REVISE 对话框

class REVISE : public CDialogEx
{
	DECLARE_DYNAMIC(REVISE)

public:
	REVISE(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~REVISE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	long j;
};
