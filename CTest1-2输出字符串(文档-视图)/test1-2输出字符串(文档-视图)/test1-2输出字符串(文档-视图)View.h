
// test1-2输出字符串(文档-视图)View.h : Ctest12输出字符串文档视图View 类的接口
//

#pragma once


class Ctest12输出字符串文档视图View : public CView
{
protected: // 仅从序列化创建
	Ctest12输出字符串文档视图View();
	DECLARE_DYNCREATE(Ctest12输出字符串文档视图View)

// 特性
public:
	Ctest12输出字符串文档视图Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest12输出字符串文档视图View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test1-2输出字符串(文档-视图)View.cpp 中的调试版本
inline Ctest12输出字符串文档视图Doc* Ctest12输出字符串文档视图View::GetDocument() const
   { return reinterpret_cast<Ctest12输出字符串文档视图Doc*>(m_pDocument); }
#endif

