
// CTest5-4View.h : CCTest54View 类的接口
//

#pragma once


class CCTest54View : public CView
{
protected: // 仅从序列化创建
	CCTest54View();
	DECLARE_DYNCREATE(CCTest54View)

// 特性
public:
	CCTest54Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest54View();
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

#ifndef _DEBUG  // CTest5-4View.cpp 中的调试版本
inline CCTest54Doc* CCTest54View::GetDocument() const
   { return reinterpret_cast<CCTest54Doc*>(m_pDocument); }
#endif

