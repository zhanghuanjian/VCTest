
// CTest13-综合二View.h : CCTest13综合二View 类的接口
//

#pragma once

class CCTest13综合二Set;

class CCTest13综合二View : public CRecordView
{
protected: // 仅从序列化创建
	CCTest13综合二View();
	DECLARE_DYNCREATE(CCTest13综合二View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST13_FORM };
#endif
	CCTest13综合二Set* m_pSet;

// 特性
public:
	CCTest13综合二Doc* GetDocument() const;
	void draw_pic(CString file);
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
	virtual ~CCTest13综合二View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString pathname;
	CString path;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // CTest13-综合二View.cpp 中的调试版本
inline CCTest13综合二Doc* CCTest13综合二View::GetDocument() const
   { return reinterpret_cast<CCTest13综合二Doc*>(m_pDocument); }
#endif

