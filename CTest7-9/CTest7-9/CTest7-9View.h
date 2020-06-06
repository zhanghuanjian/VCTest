
// CTest7-9View.h : CCTest79View 类的接口
//

#pragma once


class CCTest79View : public CView
{
protected: // 仅从序列化创建
	CCTest79View();
	DECLARE_DYNCREATE(CCTest79View)

// 特性
public:
	CCTest79Doc* GetDocument() const;

// 操作
public:
	bool set;
	CRect rect;
	CRect m_rect;
	int x, flag;


// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest79View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMovecircle();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest7-9View.cpp 中的调试版本
inline CCTest79Doc* CCTest79View::GetDocument() const
   { return reinterpret_cast<CCTest79Doc*>(m_pDocument); }
#endif

