
// VC20200303Test1View.h : CVC20200303Test1View 类的接口
//

#pragma once


class CVC20200303Test1View : public CView
{
protected: // 仅从序列化创建
	CVC20200303Test1View();
	DECLARE_DYNCREATE(CVC20200303Test1View)

// 特性
public:
	CVC20200303Test1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CVC20200303Test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // VC20200303Test1View.cpp 中的调试版本
inline CVC20200303Test1Doc* CVC20200303Test1View::GetDocument() const
   { return reinterpret_cast<CVC20200303Test1Doc*>(m_pDocument); }
#endif

