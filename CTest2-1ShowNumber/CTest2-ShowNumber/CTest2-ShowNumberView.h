
// CTest2-ShowNumberView.h : CCTest2ShowNumberView 类的接口
//

#pragma once


class CCTest2ShowNumberView : public CView
{
protected: // 仅从序列化创建
	CCTest2ShowNumberView();
	DECLARE_DYNCREATE(CCTest2ShowNumberView)

// 特性
public:
	CCTest2ShowNumberDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest2ShowNumberView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest2-ShowNumberView.cpp 中的调试版本
inline CCTest2ShowNumberDoc* CCTest2ShowNumberView::GetDocument() const
   { return reinterpret_cast<CCTest2ShowNumberDoc*>(m_pDocument); }
#endif

