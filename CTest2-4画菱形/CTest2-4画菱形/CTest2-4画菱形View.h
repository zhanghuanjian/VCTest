
// CTest2-4画菱形View.h : CCTest24画菱形View 类的接口
//

#pragma once


class CCTest24画菱形View : public CView
{
protected: // 仅从序列化创建
	CCTest24画菱形View();
	DECLARE_DYNCREATE(CCTest24画菱形View)

// 特性
public:
	CCTest24画菱形Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest24画菱形View();
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

#ifndef _DEBUG  // CTest2-4画菱形View.cpp 中的调试版本
inline CCTest24画菱形Doc* CCTest24画菱形View::GetDocument() const
   { return reinterpret_cast<CCTest24画菱形Doc*>(m_pDocument); }
#endif

