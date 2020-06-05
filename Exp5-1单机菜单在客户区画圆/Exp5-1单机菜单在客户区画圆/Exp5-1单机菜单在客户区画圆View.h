
// Exp5-1单机菜单在客户区画圆View.h : CExp51单机菜单在客户区画圆View 类的接口
//

#pragma once


class CExp51单机菜单在客户区画圆View : public CView
{
protected: // 仅从序列化创建
	CExp51单机菜单在客户区画圆View();
	DECLARE_DYNCREATE(CExp51单机菜单在客户区画圆View)

// 特性
public:
	CExp51单机菜单在客户区画圆Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CExp51单机菜单在客户区画圆View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnHuayuan();
};

#ifndef _DEBUG  // Exp5-1单机菜单在客户区画圆View.cpp 中的调试版本
inline CExp51单机菜单在客户区画圆Doc* CExp51单机菜单在客户区画圆View::GetDocument() const
   { return reinterpret_cast<CExp51单机菜单在客户区画圆Doc*>(m_pDocument); }
#endif

