
// CTest2-3显示矩形View.h : CCTest23显示矩形View 类的接口
//

#pragma once


class CCTest23显示矩形View : public CView
{
protected: // 仅从序列化创建
	CCTest23显示矩形View();
	DECLARE_DYNCREATE(CCTest23显示矩形View)

// 特性
public:
	CCTest23显示矩形Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest23显示矩形View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest2-3显示矩形View.cpp 中的调试版本
inline CCTest23显示矩形Doc* CCTest23显示矩形View::GetDocument() const
   { return reinterpret_cast<CCTest23显示矩形Doc*>(m_pDocument); }
#endif

