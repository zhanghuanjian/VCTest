
// CTest5-2View.h : CCTest52View ��Ľӿ�
//

#pragma once


class CCTest52View : public CView
{
protected: // �������л�����
	CCTest52View();
	DECLARE_DYNCREATE(CCTest52View)

// ����
public:
	CCTest52Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest52View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShownumber();
};

#ifndef _DEBUG  // CTest5-2View.cpp �еĵ��԰汾
inline CCTest52Doc* CCTest52View::GetDocument() const
   { return reinterpret_cast<CCTest52Doc*>(m_pDocument); }
#endif

