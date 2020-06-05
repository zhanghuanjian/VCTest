
// 画圆View.h : C画圆View 类的接口
//

#pragma once


class C画圆View : public CView
{
protected: // 仅从序列化创建
	C画圆View();
	DECLARE_DYNCREATE(C画圆View)

// 特性
public:
	C画圆Doc* GetDocument() const;

// 操作
public:
	CArray<CRect, CRect> ca;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C画圆View();
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

#ifndef _DEBUG  // 画圆View.cpp 中的调试版本
inline C画圆Doc* C画圆View::GetDocument() const
   { return reinterpret_cast<C画圆Doc*>(m_pDocument); }
#endif

