
// CTest2-9彩色椭圆View.h : CCTest29彩色椭圆View 类的接口
//

#pragma once


class CCTest29彩色椭圆View : public CView
{
protected: // 仅从序列化创建
	CCTest29彩色椭圆View();
	DECLARE_DYNCREATE(CCTest29彩色椭圆View)

// 特性
public:
	CCTest29彩色椭圆Doc* GetDocument() const;

// 操作
	CRect cr;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest29彩色椭圆View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest2-9彩色椭圆View.cpp 中的调试版本
inline CCTest29彩色椭圆Doc* CCTest29彩色椭圆View::GetDocument() const
   { return reinterpret_cast<CCTest29彩色椭圆Doc*>(m_pDocument); }
#endif

