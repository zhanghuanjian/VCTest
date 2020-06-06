
// CTest1-4View.h : CCTest14View 类的接口
//

#pragma once


class CCTest14View : public CView
{
protected: // 仅从序列化创建
	CCTest14View();
	DECLARE_DYNCREATE(CCTest14View)

// 特性
public:
	CCTest14Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest14View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest1-4View.cpp 中的调试版本
inline CCTest14Doc* CCTest14View::GetDocument() const
   { return reinterpret_cast<CCTest14Doc*>(m_pDocument); }
#endif

