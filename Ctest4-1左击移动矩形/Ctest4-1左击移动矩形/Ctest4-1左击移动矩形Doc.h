
// Ctest4-1����ƶ�����Doc.h : CCtest41����ƶ�����Doc ��Ľӿ�
//


#pragma once


class CCtest41����ƶ�����Doc : public CDocument
{
protected: // �������л�����
	CCtest41����ƶ�����Doc();
	DECLARE_DYNCREATE(CCtest41����ƶ�����Doc)

// ����
public:
	CRect m_tagRec;
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
	virtual ~CCtest41����ƶ�����Doc();
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
