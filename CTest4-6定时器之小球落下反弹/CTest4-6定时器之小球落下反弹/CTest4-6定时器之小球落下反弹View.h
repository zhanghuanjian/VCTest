
// CTest4-6定时器之小球落下反弹View.h : CCTest46定时器之小球落下反弹View 类的接口
//

#pragma once


class CCTest46定时器之小球落下反弹View : public CView
{
protected: // 仅从序列化创建
	CCTest46定时器之小球落下反弹View();
	DECLARE_DYNCREATE(CCTest46定时器之小球落下反弹View)

// 特性
public:
	CCTest46定时器之小球落下反弹Doc* GetDocument() const;

// 操作
public:
	int N;//代表圆的个数
	CArray <CRect, CRect> cr;//根据矩形画内切圆
	bool set;
	CRect rect;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest46定时器之小球落下反弹View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // CTest4-6定时器之小球落下反弹View.cpp 中的调试版本
inline CCTest46定时器之小球落下反弹Doc* CCTest46定时器之小球落下反弹View::GetDocument() const
   { return reinterpret_cast<CCTest46定时器之小球落下反弹Doc*>(m_pDocument); }
#endif

