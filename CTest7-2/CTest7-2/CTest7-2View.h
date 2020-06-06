
// CTest7-2View.h : CCTest72View 类的接口
//

#pragma once


class CCTest72View : public CView
{
protected: // 仅从序列化创建
	CCTest72View();
	DECLARE_DYNCREATE(CCTest72View)

// 特性
public:
	CCTest72Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest72View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest7-2View.cpp 中的调试版本
inline CCTest72Doc* CCTest72View::GetDocument() const
   { return reinterpret_cast<CCTest72Doc*>(m_pDocument); }
#endif

