
// CTest5-5View.h : CCTest55View 类的接口
//

#pragma once


class CCTest55View : public CView
{
protected: // 仅从序列化创建
	CCTest55View();
	DECLARE_DYNCREATE(CCTest55View)

// 特性
public:
	CCTest55Doc* GetDocument() const;

// 操作
public:
	CPoint m_point;
	CPoint n_point;
	CRect m_Crect;
	int set;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest55View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLine();
	afx_msg void OnRectangle();
	afx_msg void OnEllipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest5-5View.cpp 中的调试版本
inline CCTest55Doc* CCTest55View::GetDocument() const
   { return reinterpret_cast<CCTest55Doc*>(m_pDocument); }
#endif

