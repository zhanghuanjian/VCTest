
// CTest画多色线段View.h : CCTest画多色线段View 类的接口
//

#pragma once


class CCTest画多色线段View : public CView
{
protected: // 仅从序列化创建
	CCTest画多色线段View();
	DECLARE_DYNCREATE(CCTest画多色线段View)

// 特性
public:
	CCTest画多色线段Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest画多色线段View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest画多色线段View.cpp 中的调试版本
inline CCTest画多色线段Doc* CCTest画多色线段View::GetDocument() const
   { return reinterpret_cast<CCTest画多色线段Doc*>(m_pDocument); }
#endif

