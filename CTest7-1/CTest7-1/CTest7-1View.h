
// CTest7-1View.h : CCTest71View ��Ľӿ�
//

#pragma once


class CCTest71View : public CView
{
protected: // �������л�����
	CCTest71View();
	DECLARE_DYNCREATE(CCTest71View)

// ����
public:
	CCTest71Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest71View();
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

#ifndef _DEBUG  // CTest7-1View.cpp �еĵ��԰汾
inline CCTest71Doc* CCTest71View::GetDocument() const
   { return reinterpret_cast<CCTest71Doc*>(m_pDocument); }
#endif

