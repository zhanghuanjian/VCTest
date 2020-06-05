
// CTest13-2数据库之增删查改View.h : CCTest132数据库之增删查改View 类的接口
//

#pragma once

class CCTest132数据库之增删查改Set;

class CCTest132数据库之增删查改View : public CRecordView
{
protected: // 仅从序列化创建
	CCTest132数据库之增删查改View();
	DECLARE_DYNCREATE(CCTest132数据库之增删查改View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST132_FORM };
#endif
	CCTest132数据库之增删查改Set* m_pSet;

// 特性
public:
	CCTest132数据库之增删查改Doc* GetDocument() const;

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
	virtual ~CCTest132数据库之增删查改View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long number;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // CTest13-2数据库之增删查改View.cpp 中的调试版本
inline CCTest132数据库之增删查改Doc* CCTest132数据库之增删查改View::GetDocument() const
   { return reinterpret_cast<CCTest132数据库之增删查改Doc*>(m_pDocument); }
#endif

