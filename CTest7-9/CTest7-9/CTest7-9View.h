
// CTest7-9View.h : CCTest79View ��Ľӿ�
//

#pragma once


class CCTest79View : public CView
{
protected: // �������л�����
	CCTest79View();
	DECLARE_DYNCREATE(CCTest79View)

// ����
public:
	CCTest79Doc* GetDocument() const;

// ����
public:
	bool set;
	CRect rect;
	CRect m_rect;
	int x, flag;


// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest79View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMovecircle();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest7-9View.cpp �еĵ��԰汾
inline CCTest79Doc* CCTest79View::GetDocument() const
   { return reinterpret_cast<CCTest79Doc*>(m_pDocument); }
#endif

