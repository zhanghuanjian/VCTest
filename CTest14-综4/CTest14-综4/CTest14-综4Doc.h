
// CTest14-��4Doc.h : CCTest14��4Doc ��Ľӿ�
//


#pragma once
#include "CTest14-��4Set.h"


class CCTest14��4Doc : public CDocument
{
protected: // �������л�����
	CCTest14��4Doc();
	DECLARE_DYNCREATE(CCTest14��4Doc)

// ����
public:
	CCTest14��4Set m_CTest14��4Set;

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
	virtual ~CCTest14��4Doc();
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
