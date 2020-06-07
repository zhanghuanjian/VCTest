
// CTest8-31View.h : CCTest831View 类的接口
//

#pragma once


class CCTest831View : public CView
{
protected: // 仅从序列化创建
	CCTest831View();
	DECLARE_DYNCREATE(CCTest831View)

// 特性
public:
	CCTest831Doc* GetDocument() const;

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
	virtual ~CCTest831View();
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
	afx_msg void OnOpenfile();
};

#ifndef _DEBUG  // CTest8-31View.cpp 中的调试版本
inline CCTest831Doc* CCTest831View::GetDocument() const
   { return reinterpret_cast<CCTest831Doc*>(m_pDocument); }
#endif

