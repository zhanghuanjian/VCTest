
// Ctest4-1左击移动矩形View.h : CCtest41左击移动矩形View 类的接口
//

#pragma once


class CCtest41左击移动矩形View : public CView
{
protected: // 仅从序列化创建
	CCtest41左击移动矩形View();
	DECLARE_DYNCREATE(CCtest41左击移动矩形View)

// 特性
public:
	CCtest41左击移动矩形Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCtest41左击移动矩形View();
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

#ifndef _DEBUG  // Ctest4-1左击移动矩形View.cpp 中的调试版本
inline CCtest41左击移动矩形Doc* CCtest41左击移动矩形View::GetDocument() const
   { return reinterpret_cast<CCtest41左击移动矩形Doc*>(m_pDocument); }
#endif

