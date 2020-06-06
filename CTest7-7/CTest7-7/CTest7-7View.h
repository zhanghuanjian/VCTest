
// CTest7-7View.h : CCTest77View 类的接口
//

#pragma once


class CCTest77View : public CView
{
protected: // 仅从序列化创建
	CCTest77View();
	DECLARE_DYNCREATE(CCTest77View)

// 特性
public:
	CCTest77Doc* GetDocument() const;

// 操作
public:
	CRect rect;
	CPoint point;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest77View();
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
};

#ifndef _DEBUG  // CTest7-7View.cpp 中的调试版本
inline CCTest77Doc* CCTest77View::GetDocument() const
   { return reinterpret_cast<CCTest77Doc*>(m_pDocument); }
#endif

