
// CTest8-31View.h : CCTest831View ��Ľӿ�
//

#pragma once


class CCTest831View : public CView
{
protected: // �������л�����
	CCTest831View();
	DECLARE_DYNCREATE(CCTest831View)

// ����
public:
	CCTest831Doc* GetDocument() const;

// ����
public:
	CString filename;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest831View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnOpenfile();
};

#ifndef _DEBUG  // CTest8-31View.cpp �еĵ��԰汾
inline CCTest831Doc* CCTest831View::GetDocument() const
   { return reinterpret_cast<CCTest831Doc*>(m_pDocument); }
#endif

