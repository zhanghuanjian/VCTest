
// CTest5-5View.h : CCTest55View ��Ľӿ�
//

#pragma once


class CCTest55View : public CView
{
protected: // �������л�����
	CCTest55View();
	DECLARE_DYNCREATE(CCTest55View)

// ����
public:
	CCTest55Doc* GetDocument() const;

// ����
public:
	CPoint m_point;
	CPoint n_point;
	CRect m_Crect;
	int set;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest55View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLine();
	afx_msg void OnRectangle();
	afx_msg void OnEllipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest5-5View.cpp �еĵ��԰汾
inline CCTest55Doc* CCTest55View::GetDocument() const
   { return reinterpret_cast<CCTest55Doc*>(m_pDocument); }
#endif

