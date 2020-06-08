
// CTest14-综4View.h : CCTest14综4View 类的接口
//

#pragma once

class CCTest14综4Set;

class CCTest14综4View : public CRecordView
{
protected: // 仅从序列化创建
	CCTest14综4View();
	DECLARE_DYNCREATE(CCTest14综4View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST144_FORM };
#endif
	CCTest14综4Set* m_pSet;

// 特性
public:
	CCTest14综4Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CCTest14综4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString a;
	CString b;
	CString c;
	CString d;
	CString e;
	CString f;
	CString g;
	CString h;
	afx_msg void OnSearch();
	afx_msg void OnSort();
	afx_msg void OnTraversal();
};

#ifndef _DEBUG  // CTest14-综4View.cpp 中的调试版本
inline CCTest14综4Doc* CCTest14综4View::GetDocument() const
   { return reinterpret_cast<CCTest14综4Doc*>(m_pDocument); }
#endif

