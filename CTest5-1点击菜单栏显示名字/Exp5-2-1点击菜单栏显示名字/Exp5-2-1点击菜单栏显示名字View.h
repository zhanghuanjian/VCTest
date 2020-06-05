
// Exp5-2-1点击菜单栏显示名字View.h : CExp521点击菜单栏显示名字View 类的接口
//

#pragma once


class CExp521点击菜单栏显示名字View : public CView
{
protected: // 仅从序列化创建
	CExp521点击菜单栏显示名字View();
	DECLARE_DYNCREATE(CExp521点击菜单栏显示名字View)

// 特性
public:
	CExp521点击菜单栏显示名字Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CExp521点击菜单栏显示名字View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // Exp5-2-1点击菜单栏显示名字View.cpp 中的调试版本
inline CExp521点击菜单栏显示名字Doc* CExp521点击菜单栏显示名字View::GetDocument() const
   { return reinterpret_cast<CExp521点击菜单栏显示名字Doc*>(m_pDocument); }
#endif

