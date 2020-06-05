
// CTest5-2View.h : CCTest52View 类的接口
//

#pragma once


class CCTest52View : public CView
{
protected: // 仅从序列化创建
	CCTest52View();
	DECLARE_DYNCREATE(CCTest52View)

// 特性
public:
	CCTest52Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest52View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShownumber();
};

#ifndef _DEBUG  // CTest5-2View.cpp 中的调试版本
inline CCTest52Doc* CCTest52View::GetDocument() const
   { return reinterpret_cast<CCTest52Doc*>(m_pDocument); }
#endif

