
// CTest7-10View.h : CCTest710View ��Ľӿ�
//

#pragma once


class CCTest710View : public CView
{
protected: // �������л�����
	CCTest710View();
	DECLARE_DYNCREATE(CCTest710View)

// ����
public:
	CCTest710Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest710View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // CTest7-10View.cpp �еĵ��԰汾
inline CCTest710Doc* CCTest710View::GetDocument() const
   { return reinterpret_cast<CCTest710Doc*>(m_pDocument); }
#endif

