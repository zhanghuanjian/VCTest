
// CTest7-1View.h : CCTest71View 类的接口
//

#pragma once


class CCTest71View : public CView
{
protected: // 仅从序列化创建
	CCTest71View();
	DECLARE_DYNCREATE(CCTest71View)

// 特性
public:
	CCTest71Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest71View();
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
};

#ifndef _DEBUG  // CTest7-1View.cpp 中的调试版本
inline CCTest71Doc* CCTest71View::GetDocument() const
   { return reinterpret_cast<CCTest71Doc*>(m_pDocument); }
#endif

