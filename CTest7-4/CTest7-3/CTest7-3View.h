
// CTest7-3View.h : CCTest73View ��Ľӿ�
//

#include"MyDlg0.h"

#pragma once



class CCTest73View : public CView
{
protected: // �������л�����
	CCTest73View();
	DECLARE_DYNCREATE(CCTest73View)

// ����
public:
	CCTest73Doc* GetDocument() const;

// ����
public:
	int show_hide;
	MyDlg0 *pD;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest73View();
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
	afx_msg void OnShowhide();
};

#ifndef _DEBUG  // CTest7-3View.cpp �еĵ��԰汾
inline CCTest73Doc* CCTest73View::GetDocument() const
   { return reinterpret_cast<CCTest73Doc*>(m_pDocument); }
#endif

