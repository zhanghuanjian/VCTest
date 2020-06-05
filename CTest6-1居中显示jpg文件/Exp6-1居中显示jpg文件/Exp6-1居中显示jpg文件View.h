
// Exp6-1居中显示jpg文件View.h : CExp61居中显示jpg文件View 类的接口
//

#pragma once


class CExp61居中显示jpg文件View : public CView
{
protected: // 仅从序列化创建
	CExp61居中显示jpg文件View();
	DECLARE_DYNCREATE(CExp61居中显示jpg文件View)

// 特性
public:
	CExp61居中显示jpg文件Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CExp61居中显示jpg文件View();
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

#ifndef _DEBUG  // Exp6-1居中显示jpg文件View.cpp 中的调试版本
inline CExp61居中显示jpg文件Doc* CExp61居中显示jpg文件View::GetDocument() const
   { return reinterpret_cast<CExp61居中显示jpg文件Doc*>(m_pDocument); }
#endif

