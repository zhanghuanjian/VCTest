
// CTest2-7重绘再现随机圆View.h : CCTest27重绘再现随机圆View 类的接口
//

#pragma once


class CCTest27重绘再现随机圆View : public CView
{
protected: // 仅从序列化创建
	CCTest27重绘再现随机圆View();
	DECLARE_DYNCREATE(CCTest27重绘再现随机圆View)

// 特性
public:
	CCTest27重绘再现随机圆Doc* GetDocument() const;

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
	virtual ~CCTest27重绘再现随机圆View();
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

#ifndef _DEBUG  // CTest2-7重绘再现随机圆View.cpp 中的调试版本
inline CCTest27重绘再现随机圆Doc* CCTest27重绘再现随机圆View::GetDocument() const
   { return reinterpret_cast<CCTest27重绘再现随机圆Doc*>(m_pDocument); }
#endif

