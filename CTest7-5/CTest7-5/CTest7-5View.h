
// CTest7-5View.h : CCTest75View ��Ľӿ�
//

#pragma once


class CCTest75View : public CView
{
protected: // �������л�����
	CCTest75View();
	DECLARE_DYNCREATE(CCTest75View)

// ����
public:
	CCTest75Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest75View();
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
};

#ifndef _DEBUG  // CTest7-5View.cpp �еĵ��԰汾
inline CCTest75Doc* CCTest75View::GetDocument() const
   { return reinterpret_cast<CCTest75Doc*>(m_pDocument); }
#endif

