
// CTest4-2检测鼠标移动消息View.h : CCTest42检测鼠标移动消息View 类的接口
//

#pragma once


class CCTest42检测鼠标移动消息View : public CView
{
protected: // 仅从序列化创建
	CCTest42检测鼠标移动消息View();
	DECLARE_DYNCREATE(CCTest42检测鼠标移动消息View)

// 特性
public:
	CCTest42检测鼠标移动消息Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest42检测鼠标移动消息View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest4-2检测鼠标移动消息View.cpp 中的调试版本
inline CCTest42检测鼠标移动消息Doc* CCTest42检测鼠标移动消息View::GetDocument() const
   { return reinterpret_cast<CCTest42检测鼠标移动消息Doc*>(m_pDocument); }
#endif

