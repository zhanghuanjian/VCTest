
// cTest5-4View.h : CcTest54View ��Ľӿ�
//

#pragma once


class CcTest54View : public CView
{
protected: // �������л�����
	CcTest54View();
	DECLARE_DYNCREATE(CcTest54View)

// ����
public:
	CcTest54Doc* GetDocument() const;

// ����
public:
	int N;
	CArray<CRect, CRect> ca;
	bool set;
	CRect m_window;
	CRect cr;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CcTest54View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawcircle();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // cTest5-4View.cpp �еĵ��԰汾
inline CcTest54Doc* CcTest54View::GetDocument() const
   { return reinterpret_cast<CcTest54Doc*>(m_pDocument); }
#endif

