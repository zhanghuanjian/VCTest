
// CTest7-7View.h : CCTest77View ��Ľӿ�
//

#pragma once


class CCTest77View : public CView
{
protected: // �������л�����
	CCTest77View();
	DECLARE_DYNCREATE(CCTest77View)

// ����
public:
	CCTest77Doc* GetDocument() const;

// ����
public:
	CRect rect;
	CPoint point;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest77View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest7-7View.cpp �еĵ��԰汾
inline CCTest77Doc* CCTest77View::GetDocument() const
   { return reinterpret_cast<CCTest77Doc*>(m_pDocument); }
#endif

