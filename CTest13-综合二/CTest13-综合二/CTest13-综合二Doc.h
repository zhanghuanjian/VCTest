
// CTest13-�ۺ϶�Doc.h : CCTest13�ۺ϶�Doc ��Ľӿ�
//


#pragma once
#include "CTest13-�ۺ϶�Set.h"


class CCTest13�ۺ϶�Doc : public CDocument
{
protected: // �������л�����
	CCTest13�ۺ϶�Doc();
	DECLARE_DYNCREATE(CCTest13�ۺ϶�Doc)

// ����
public:
	CCTest13�ۺ϶�Set m_CTest13�ۺ϶�Set;

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
	virtual ~CCTest13�ۺ϶�Doc();
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
