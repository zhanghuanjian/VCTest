
// CTest6-2�ͻ�����ʾjpg�ļ�Doc.h : CCTest62�ͻ�����ʾjpg�ļ�Doc ��Ľӿ�
//


#pragma once


class CCTest62�ͻ�����ʾjpg�ļ�Doc : public CDocument
{
protected: // �������л�����
	CCTest62�ͻ�����ʾjpg�ļ�Doc();
	DECLARE_DYNCREATE(CCTest62�ͻ�����ʾjpg�ļ�Doc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CCTest62�ͻ�����ʾjpg�ļ�Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
