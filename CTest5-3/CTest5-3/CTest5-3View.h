
// CTest5-3View.h : CCTest53View ��Ľӿ�
//

#pragma once


class CCTest53View : public CView
{
protected: // �������л�����
	CCTest53View();
	DECLARE_DYNCREATE(CCTest53View)

// ����
public:
	CCTest53Doc* GetDocument() const;

	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;


// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest53View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest5-3View.cpp �еĵ��԰汾
inline CCTest53Doc* CCTest53View::GetDocument() const
   { return reinterpret_cast<CCTest53Doc*>(m_pDocument); }
#endif

