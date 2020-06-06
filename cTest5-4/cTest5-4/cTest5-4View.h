
// cTest5-4View.h : CcTest54View 类的接口
//

#pragma once


class CcTest54View : public CView
{
protected: // 仅从序列化创建
	CcTest54View();
	DECLARE_DYNCREATE(CcTest54View)

// 特性
public:
	CcTest54Doc* GetDocument() const;

// 操作
public:
	int N;
	CArray<CRect, CRect> ca;
	bool set;
	CRect m_window;
	CRect cr;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CcTest54View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawcircle();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // cTest5-4View.cpp 中的调试版本
inline CcTest54Doc* CcTest54View::GetDocument() const
   { return reinterpret_cast<CcTest54Doc*>(m_pDocument); }
#endif

