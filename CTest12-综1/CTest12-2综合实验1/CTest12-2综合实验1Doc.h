
// CTest12-2�ۺ�ʵ��1Doc.h : CCTest122�ۺ�ʵ��1Doc ��Ľӿ�
//


#pragma once
#include "CTest12-2�ۺ�ʵ��1Set.h"


class CCTest122�ۺ�ʵ��1Doc : public CDocument
{
protected: // �������л�����
	CCTest122�ۺ�ʵ��1Doc();
	DECLARE_DYNCREATE(CCTest122�ۺ�ʵ��1Doc)

// ����
public:
	CCTest122�ۺ�ʵ��1Set m_CTest122�ۺ�ʵ��1Set;

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
	virtual ~CCTest122�ۺ�ʵ��1Doc();
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
