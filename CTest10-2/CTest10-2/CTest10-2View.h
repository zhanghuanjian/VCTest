
// CTest10-2View.h : CCTest102View ��Ľӿ�
//

#pragma once

class CCTest102View : public CView
{
protected: // �������л�����
	CCTest102View();
	DECLARE_DYNCREATE(CCTest102View)

// ����
public:
	CCTest102Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest102View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest10-2View.cpp �еĵ��԰汾
inline CCTest102Doc* CCTest102View::GetDocument() const
   { return reinterpret_cast<CCTest102Doc*>(m_pDocument); }
#endif

