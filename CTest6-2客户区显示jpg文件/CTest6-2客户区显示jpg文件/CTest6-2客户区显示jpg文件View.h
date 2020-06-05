
// CTest6-2客户区显示jpg文件View.h : CCTest62客户区显示jpg文件View 类的接口
//

#pragma once


class CCTest62客户区显示jpg文件View : public CView
{
protected: // 仅从序列化创建
	CCTest62客户区显示jpg文件View();
	DECLARE_DYNCREATE(CCTest62客户区显示jpg文件View)

// 特性
public:
	CCTest62客户区显示jpg文件Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest62客户区显示jpg文件View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // CTest6-2客户区显示jpg文件View.cpp 中的调试版本
inline CCTest62客户区显示jpg文件Doc* CCTest62客户区显示jpg文件View::GetDocument() const
   { return reinterpret_cast<CCTest62客户区显示jpg文件Doc*>(m_pDocument); }
#endif

