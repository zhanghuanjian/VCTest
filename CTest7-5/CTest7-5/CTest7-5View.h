
// CTest7-5View.h : CCTest75View 类的接口
//

#pragma once


class CCTest75View : public CView
{
protected: // 仅从序列化创建
	CCTest75View();
	DECLARE_DYNCREATE(CCTest75View)

// 特性
public:
	CCTest75Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest75View();
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

#ifndef _DEBUG  // CTest7-5View.cpp 中的调试版本
inline CCTest75Doc* CCTest75View::GetDocument() const
   { return reinterpret_cast<CCTest75Doc*>(m_pDocument); }
#endif

