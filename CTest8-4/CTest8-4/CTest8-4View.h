
// CTest8-4View.h : CCTest84View ��Ľӿ�
//

#pragma once


class CCTest84View : public CView
{
protected: // �������л�����
	CCTest84View();
	DECLARE_DYNCREATE(CCTest84View)

// ����
public:
	CCTest84Doc* GetDocument() const;

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
	virtual ~CCTest84View();
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
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // CTest8-4View.cpp �еĵ��԰汾
inline CCTest84Doc* CCTest84View::GetDocument() const
   { return reinterpret_cast<CCTest84Doc*>(m_pDocument); }
#endif

