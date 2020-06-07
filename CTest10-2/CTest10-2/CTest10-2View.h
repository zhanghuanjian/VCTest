
// CTest10-2View.h : CCTest102View 类的接口
//

#pragma once

class CCTest102View : public CView
{
protected: // 仅从序列化创建
	CCTest102View();
	DECLARE_DYNCREATE(CCTest102View)

// 特性
public:
	CCTest102Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest102View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest10-2View.cpp 中的调试版本
inline CCTest102Doc* CCTest102View::GetDocument() const
   { return reinterpret_cast<CCTest102Doc*>(m_pDocument); }
#endif

