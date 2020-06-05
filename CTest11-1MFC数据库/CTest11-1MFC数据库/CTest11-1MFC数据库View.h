
// CTest11-1MFC数据库View.h : CCTest111MFC数据库View 类的接口
//

#pragma once

class CCTest111MFC数据库Set;

class CCTest111MFC数据库View : public CRecordView
{
protected: // 仅从序列化创建
	CCTest111MFC数据库View();
	DECLARE_DYNCREATE(CCTest111MFC数据库View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST111MFC_FORM };
#endif
	CCTest111MFC数据库Set* m_pSet;

// 特性
public:
	CCTest111MFC数据库Doc* GetDocument() const;

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
	virtual ~CCTest111MFC数据库View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	long ID;
	CString name;
	CString number;
	CString age;
	CString phoneNum;
};

#ifndef _DEBUG  // CTest11-1MFC数据库View.cpp 中的调试版本
inline CCTest111MFC数据库Doc* CCTest111MFC数据库View::GetDocument() const
   { return reinterpret_cast<CCTest111MFC数据库Doc*>(m_pDocument); }
#endif

