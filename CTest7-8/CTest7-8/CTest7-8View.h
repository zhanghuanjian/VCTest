
// CTest7-8View.h : CCTest78View ��Ľӿ�
//

#pragma once


class CCTest78View : public CView
{
protected: // �������л�����
	CCTest78View();
	DECLARE_DYNCREATE(CCTest78View)

// ����
public:
	CCTest78Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest78View();
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

#ifndef _DEBUG  // CTest7-8View.cpp �еĵ��԰汾
inline CCTest78Doc* CCTest78View::GetDocument() const
   { return reinterpret_cast<CCTest78Doc*>(m_pDocument); }
#endif

