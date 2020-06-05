
// Ctest3-5随机数运算Doc.h : CCtest35随机数运算Doc 类的接口
//


#pragma once


class CCtest35随机数运算Doc : public CDocument
{
protected: // 仅从序列化创建
	CCtest35随机数运算Doc();
	DECLARE_DYNCREATE(CCtest35随机数运算Doc)

// 特性
public:

// 操作
public:
	CRect A;
	CRect B;
	CRect C;
	int a, b;

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
	virtual ~CCtest35随机数运算Doc();
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
