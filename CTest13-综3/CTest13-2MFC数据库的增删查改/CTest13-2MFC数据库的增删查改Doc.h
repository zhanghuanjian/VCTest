
// CTest13-2MFC���ݿ����ɾ���Doc.h : CCTest132MFC���ݿ����ɾ���Doc ��Ľӿ�
//


#pragma once
#include "CTest13-2MFC���ݿ����ɾ���Set.h"


class CCTest132MFC���ݿ����ɾ���Doc : public CDocument
{
protected: // �������л�����
	CCTest132MFC���ݿ����ɾ���Doc();
	DECLARE_DYNCREATE(CCTest132MFC���ݿ����ɾ���Doc)

// ����
public:
	CCTest132MFC���ݿ����ɾ���Set m_CTest132MFC���ݿ����ɾ���Set;

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
	virtual ~CCTest132MFC���ݿ����ɾ���Doc();
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
