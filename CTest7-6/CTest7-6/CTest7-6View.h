
// CTest7-6View.h : CCTest76View ��Ľӿ�
//

#pragma once


class CCTest76View : public CView
{
protected: // �������л�����
	CCTest76View();
	DECLARE_DYNCREATE(CCTest76View)

// ����
public:
	CCTest76Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest76View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnExstring();
};

#ifndef _DEBUG  // CTest7-6View.cpp �еĵ��԰汾
inline CCTest76Doc* CCTest76View::GetDocument() const
   { return reinterpret_cast<CCTest76Doc*>(m_pDocument); }
#endif

