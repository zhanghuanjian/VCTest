
// CTest1-4View.h : CCTest14View ��Ľӿ�
//

#pragma once


class CCTest14View : public CView
{
protected: // �������л�����
	CCTest14View();
	DECLARE_DYNCREATE(CCTest14View)

// ����
public:
	CCTest14Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest14View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest1-4View.cpp �еĵ��԰汾
inline CCTest14Doc* CCTest14View::GetDocument() const
   { return reinterpret_cast<CCTest14Doc*>(m_pDocument); }
#endif

