
// CTest8-4View.h : CCTest84View 类的接口
//

#pragma once


class CCTest84View : public CView
{
protected: // 仅从序列化创建
	CCTest84View();
	DECLARE_DYNCREATE(CCTest84View)

// 特性
public:
	CCTest84Doc* GetDocument() const;

// 操作
public:
	CString filename;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest84View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // CTest8-4View.cpp 中的调试版本
inline CCTest84Doc* CCTest84View::GetDocument() const
   { return reinterpret_cast<CCTest84Doc*>(m_pDocument); }
#endif

