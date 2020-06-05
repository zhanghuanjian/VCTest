
// CTest2-8椭圆View.h : CCTest28椭圆View 类的接口
//

#pragma once


class CCTest28椭圆View : public CView
{
protected: // 仅从序列化创建
	CCTest28椭圆View();
	DECLARE_DYNCREATE(CCTest28椭圆View)

// 特性
public:
	CCTest28椭圆Doc* GetDocument() const;

// 操作
public:
	CRect cr;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest28椭圆View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest2-8椭圆View.cpp 中的调试版本
inline CCTest28椭圆Doc* CCTest28椭圆View::GetDocument() const
   { return reinterpret_cast<CCTest28椭圆Doc*>(m_pDocument); }
#endif

