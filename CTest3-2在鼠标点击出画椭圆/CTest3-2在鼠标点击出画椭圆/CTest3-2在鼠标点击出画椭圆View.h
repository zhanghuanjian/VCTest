
// CTest3-2在鼠标点击出画椭圆View.h : CCTest32在鼠标点击出画椭圆View 类的接口
//

#pragma once


class CCTest32在鼠标点击出画椭圆View : public CView
{
protected: // 仅从序列化创建
	CCTest32在鼠标点击出画椭圆View();
	DECLARE_DYNCREATE(CCTest32在鼠标点击出画椭圆View)

// 特性
public:
	CCTest32在鼠标点击出画椭圆Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest32在鼠标点击出画椭圆View();
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
};

#ifndef _DEBUG  // CTest3-2在鼠标点击出画椭圆View.cpp 中的调试版本
inline CCTest32在鼠标点击出画椭圆Doc* CCTest32在鼠标点击出画椭圆View::GetDocument() const
   { return reinterpret_cast<CCTest32在鼠标点击出画椭圆Doc*>(m_pDocument); }
#endif

