
// CTest5-4View.h : CCTest54View ��Ľӿ�
//

#pragma once


class CCTest54View : public CView
{
protected: // �������л�����
	CCTest54View();
	DECLARE_DYNCREATE(CCTest54View)

// ����
public:
	CCTest54Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest54View();
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
};

#ifndef _DEBUG  // CTest5-4View.cpp �еĵ��԰汾
inline CCTest54Doc* CCTest54View::GetDocument() const
   { return reinterpret_cast<CCTest54Doc*>(m_pDocument); }
#endif

