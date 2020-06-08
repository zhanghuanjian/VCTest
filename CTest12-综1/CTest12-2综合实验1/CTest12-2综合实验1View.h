
// CTest12-2综合实验1View.h : CCTest122综合实验1View 类的接口
//

#pragma once

class CCTest122综合实验1Set;

class CCTest122综合实验1View : public CRecordView
{
protected: // 仅从序列化创建
	CCTest122综合实验1View();
	DECLARE_DYNCREATE(CCTest122综合实验1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST1221_FORM };
#endif
	CCTest122综合实验1Set* m_pSet;
	CString path;

// 特性
public:
	CCTest122综合实验1Doc* GetDocument() const;
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
	virtual ~CCTest122综合实验1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString i;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // CTest12-2综合实验1View.cpp 中的调试版本
inline CCTest122综合实验1Doc* CCTest122综合实验1View::GetDocument() const
   { return reinterpret_cast<CCTest122综合实验1Doc*>(m_pDocument); }
#endif

