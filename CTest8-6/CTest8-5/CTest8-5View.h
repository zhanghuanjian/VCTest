
// CTest8-5View.h : CCTest85View ��Ľӿ�
//

#pragma once


class CCTest85View : public CView
{
protected: // �������л�����
	CCTest85View();
	DECLARE_DYNCREATE(CCTest85View)

// ����
public:
	CCTest85Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest85View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEllipse();
};

#ifndef _DEBUG  // CTest8-5View.cpp �еĵ��԰汾
inline CCTest85Doc* CCTest85View::GetDocument() const
   { return reinterpret_cast<CCTest85Doc*>(m_pDocument); }
#endif

