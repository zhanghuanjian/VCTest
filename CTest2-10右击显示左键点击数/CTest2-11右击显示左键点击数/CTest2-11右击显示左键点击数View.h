
// CTest2-11右击显示左键点击数View.h : CCTest211右击显示左键点击数View 类的接口
//

#pragma once


class CCTest211右击显示左键点击数View : public CView
{
protected: // 仅从序列化创建
	CCTest211右击显示左键点击数View();
	DECLARE_DYNCREATE(CCTest211右击显示左键点击数View)

// 特性
public:
	CCTest211右击显示左键点击数Doc* GetDocument() const;
	CString s;
// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest211右击显示左键点击数View();
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

#ifndef _DEBUG  // CTest2-11右击显示左键点击数View.cpp 中的调试版本
inline CCTest211右击显示左键点击数Doc* CCTest211右击显示左键点击数View::GetDocument() const
   { return reinterpret_cast<CCTest211右击显示左键点击数Doc*>(m_pDocument); }
#endif

