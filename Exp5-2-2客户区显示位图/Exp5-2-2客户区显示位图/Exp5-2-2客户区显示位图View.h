
// Exp5-2-2客户区显示位图View.h : CExp522客户区显示位图View 类的接口
//

#pragma once


class CExp522客户区显示位图View : public CView
{
protected: // 仅从序列化创建
	CExp522客户区显示位图View();
	DECLARE_DYNCREATE(CExp522客户区显示位图View)

// 特性
	
public:
	CExp522客户区显示位图Doc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;//位图对象(添加成员)
	int m_nWidth;//存储位图宽的数据成员
	int m_nHeight;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CExp522客户区显示位图View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Exp5-2-2客户区显示位图View.cpp 中的调试版本
inline CExp522客户区显示位图Doc* CExp522客户区显示位图View::GetDocument() const
   { return reinterpret_cast<CExp522客户区显示位图Doc*>(m_pDocument); }
#endif

