
// test1-2输出字符串(文档-视图)Doc.h : Ctest12输出字符串文档视图Doc 类的接口
//


#pragma once


class Ctest12输出字符串文档视图Doc : public CDocument
{
protected: // 仅从序列化创建
	Ctest12输出字符串文档视图Doc();
	DECLARE_DYNCREATE(Ctest12输出字符串文档视图Doc)

// 特性
public:

// 操作
public:
	CString s;

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~Ctest12输出字符串文档视图Doc();
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
