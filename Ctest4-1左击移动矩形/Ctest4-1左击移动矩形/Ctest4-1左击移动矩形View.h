
// Ctest4-1����ƶ�����View.h : CCtest41����ƶ�����View ��Ľӿ�
//

#pragma once


class CCtest41����ƶ�����View : public CView
{
protected: // �������л�����
	CCtest41����ƶ�����View();
	DECLARE_DYNCREATE(CCtest41����ƶ�����View)

// ����
public:
	CCtest41����ƶ�����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCtest41����ƶ�����View();
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

#ifndef _DEBUG  // Ctest4-1����ƶ�����View.cpp �еĵ��԰汾
inline CCtest41����ƶ�����Doc* CCtest41����ƶ�����View::GetDocument() const
   { return reinterpret_cast<CCtest41����ƶ�����Doc*>(m_pDocument); }
#endif

