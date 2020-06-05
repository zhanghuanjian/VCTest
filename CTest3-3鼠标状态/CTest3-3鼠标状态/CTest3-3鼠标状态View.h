
// CTest3-3鼠标状态View.h : CCTest33鼠标状态View 类的接口
//

#pragma once


class CCTest33鼠标状态View : public CView
{
protected: // 仅从序列化创建
	CCTest33鼠标状态View();
	DECLARE_DYNCREATE(CCTest33鼠标状态View)

// 特性
public:
	CCTest33鼠标状态Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest33鼠标状态View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest3-3鼠标状态View.cpp 中的调试版本
inline CCTest33鼠标状态Doc* CCTest33鼠标状态View::GetDocument() const
   { return reinterpret_cast<CCTest33鼠标状态Doc*>(m_pDocument); }
#endif

