
// Ctest3-5随机数运算View.h : CCtest35随机数运算View 类的接口
//

#pragma once


class CCtest35随机数运算View : public CView
{
protected: // 仅从序列化创建
	CCtest35随机数运算View();
	DECLARE_DYNCREATE(CCtest35随机数运算View)

// 特性
public:
	CCtest35随机数运算Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCtest35随机数运算View();
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

#ifndef _DEBUG  // Ctest3-5随机数运算View.cpp 中的调试版本
inline CCtest35随机数运算Doc* CCtest35随机数运算View::GetDocument() const
   { return reinterpret_cast<CCtest35随机数运算Doc*>(m_pDocument); }
#endif

