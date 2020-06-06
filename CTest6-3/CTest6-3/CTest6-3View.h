
// CTest6-3View.h : CCTest63View 类的接口
//

#pragma once


class CCTest63View : public CView
{
protected: // 仅从序列化创建
	CCTest63View();
	DECLARE_DYNCREATE(CCTest63View)

// 特性
public:
	CCTest63Doc* GetDocument() const;

// 操作
public:
	int i = 1;
	CString s, str;
	int pos, flag, x, y;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest63View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest6-3View.cpp 中的调试版本
inline CCTest63Doc* CCTest63View::GetDocument() const
   { return reinterpret_cast<CCTest63Doc*>(m_pDocument); }
#endif

