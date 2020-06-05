
// CTest13-2数据库之增删查改Doc.h : CCTest132数据库之增删查改Doc 类的接口
//


#pragma once
#include "CTest13-2数据库之增删查改Set.h"


class CCTest132数据库之增删查改Doc : public CDocument
{
protected: // 仅从序列化创建
	CCTest132数据库之增删查改Doc();
	DECLARE_DYNCREATE(CCTest132数据库之增删查改Doc)

// 特性
public:
	CCTest132数据库之增删查改Set m_CTest132数据库之增删查改Set;

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
	virtual ~CCTest132数据库之增删查改Doc();
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
