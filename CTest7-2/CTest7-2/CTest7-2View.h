
// CTest7-2View.h : CCTest72View ��Ľӿ�
//

#pragma once


class CCTest72View : public CView
{
protected: // �������л�����
	CCTest72View();
	DECLARE_DYNCREATE(CCTest72View)

// ����
public:
	CCTest72Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest72View();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest7-2View.cpp �еĵ��԰汾
inline CCTest72Doc* CCTest72View::GetDocument() const
   { return reinterpret_cast<CCTest72Doc*>(m_pDocument); }
#endif

