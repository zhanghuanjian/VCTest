
// CTest14-综4Doc.h : CCTest14综4Doc 类的接口
//


#pragma once
#include "CTest14-综4Set.h"


class CCTest14综4Doc : public CDocument
{
protected: // 仅从序列化创建
	CCTest14综4Doc();
	DECLARE_DYNCREATE(CCTest14综4Doc)

// 特性
public:
	CCTest14综4Set m_CTest14综4Set;

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CCTest14综4Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
