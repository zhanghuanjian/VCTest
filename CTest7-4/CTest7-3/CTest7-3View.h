
// CTest7-3View.h : CCTest73View 类的接口
//

#include"MyDlg0.h"

#pragma once



class CCTest73View : public CView
{
protected: // 仅从序列化创建
	CCTest73View();
	DECLARE_DYNCREATE(CCTest73View)

// 特性
public:
	CCTest73Doc* GetDocument() const;

// 操作
public:
	int show_hide;
	MyDlg0 *pD;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest73View();
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
	afx_msg void OnShowhide();
};

#ifndef _DEBUG  // CTest7-3View.cpp 中的调试版本
inline CCTest73Doc* CCTest73View::GetDocument() const
   { return reinterpret_cast<CCTest73Doc*>(m_pDocument); }
#endif

