
// CTest8-5View.h : CCTest85View 类的接口
//

#pragma once


class CCTest85View : public CView
{
protected: // 仅从序列化创建
	CCTest85View();
	DECLARE_DYNCREATE(CCTest85View)

// 特性
public:
	CCTest85Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest85View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEllipse();
};

#ifndef _DEBUG  // CTest8-5View.cpp 中的调试版本
inline CCTest85Doc* CCTest85View::GetDocument() const
   { return reinterpret_cast<CCTest85Doc*>(m_pDocument); }
#endif

