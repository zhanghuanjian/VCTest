
// CTest6-3View.h : CCTest63View ��Ľӿ�
//

#pragma once


class CCTest63View : public CView
{
protected: // �������л�����
	CCTest63View();
	DECLARE_DYNCREATE(CCTest63View)

// ����
public:
	CCTest63Doc* GetDocument() const;

// ����
public:
	int i = 1;
	CString s, str;
	int pos, flag, x, y;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest63View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest6-3View.cpp �еĵ��԰汾
inline CCTest63Doc* CCTest63View::GetDocument() const
   { return reinterpret_cast<CCTest63Doc*>(m_pDocument); }
#endif

