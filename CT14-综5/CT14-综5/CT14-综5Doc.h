
// CT14-��5Doc.h : CCT14��5Doc ��Ľӿ�
//


#pragma once
#include "CT14-��5Set.h"


class CCT14��5Doc : public CDocument
{
protected: // �������л�����
	CCT14��5Doc();
	DECLARE_DYNCREATE(CCT14��5Doc)

// ����
public:
	CCT14��5Set m_CT14��5Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CCT14��5Doc();
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
