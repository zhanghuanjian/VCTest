
// CTest4-4计鼠标移动次数View.h : CCTest44计鼠标移动次数View 类的接口
//

#pragma once


class CCTest44计鼠标移动次数View : public CView
{
protected: // 仅从序列化创建
	CCTest44计鼠标移动次数View();
	DECLARE_DYNCREATE(CCTest44计鼠标移动次数View)

// 特性
public:
	CCTest44计鼠标移动次数Doc* GetDocument() const;

// 操作
public:
	CPoint up_point;
	CPoint down_point;
	int xiangsu;
	int count;
	CString s1, s2;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest44计鼠标移动次数View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest4-4计鼠标移动次数View.cpp 中的调试版本
inline CCTest44计鼠标移动次数Doc* CCTest44计鼠标移动次数View::GetDocument() const
   { return reinterpret_cast<CCTest44计鼠标移动次数Doc*>(m_pDocument); }
#endif

