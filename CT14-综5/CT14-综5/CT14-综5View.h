
// CT14-综5View.h : CCT14综5View 类的接口
//

#pragma once

class CCT14综5Set;

class CCT14综5View : public CRecordView
{
protected: // 仅从序列化创建
	CCT14综5View();
	DECLARE_DYNCREATE(CCT14综5View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CT145_FORM };
#endif
	CCT14综5Set* m_pSet;

// 特性
public:
	CCT14综5Doc* GetDocument() const;

// 操作
public:
	CString  path;

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CCT14综5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRecordFirst();
	CString m_jpg;
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // CT14-综5View.cpp 中的调试版本
inline CCT14综5Doc* CCT14综5View::GetDocument() const
   { return reinterpret_cast<CCT14综5Doc*>(m_pDocument); }
#endif

