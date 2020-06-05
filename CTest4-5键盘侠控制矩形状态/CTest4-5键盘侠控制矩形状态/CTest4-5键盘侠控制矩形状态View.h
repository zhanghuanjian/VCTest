
// CTest4-5键盘侠控制矩形状态View.h : CCTest45键盘侠控制矩形状态View 类的接口
//

#pragma once


class CCTest45键盘侠控制矩形状态View : public CView
{
protected: // 仅从序列化创建
	CCTest45键盘侠控制矩形状态View();
	DECLARE_DYNCREATE(CCTest45键盘侠控制矩形状态View)

// 特性
public:
	CCTest45键盘侠控制矩形状态Doc* GetDocument() const;

// 操作
public:
	CString s1, s2, s3, s4, s5;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest45键盘侠控制矩形状态View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest4-5键盘侠控制矩形状态View.cpp 中的调试版本
inline CCTest45键盘侠控制矩形状态Doc* CCTest45键盘侠控制矩形状态View::GetDocument() const
   { return reinterpret_cast<CCTest45键盘侠控制矩形状态Doc*>(m_pDocument); }
#endif

