
// CTest7-8View.h : CCTest78View 类的接口
//

#pragma once


class CCTest78View : public CView
{
protected: // 仅从序列化创建
	CCTest78View();
	DECLARE_DYNCREATE(CCTest78View)

// 特性
public:
	CCTest78Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest78View();
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

#ifndef _DEBUG  // CTest7-8View.cpp 中的调试版本
inline CCTest78Doc* CCTest78View::GetDocument() const
   { return reinterpret_cast<CCTest78Doc*>(m_pDocument); }
#endif

