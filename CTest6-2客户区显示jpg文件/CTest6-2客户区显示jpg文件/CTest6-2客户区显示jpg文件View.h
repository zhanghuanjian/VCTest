
// CTest6-2�ͻ�����ʾjpg�ļ�View.h : CCTest62�ͻ�����ʾjpg�ļ�View ��Ľӿ�
//

#pragma once


class CCTest62�ͻ�����ʾjpg�ļ�View : public CView
{
protected: // �������л�����
	CCTest62�ͻ�����ʾjpg�ļ�View();
	DECLARE_DYNCREATE(CCTest62�ͻ�����ʾjpg�ļ�View)

// ����
public:
	CCTest62�ͻ�����ʾjpg�ļ�Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest62�ͻ�����ʾjpg�ļ�View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // CTest6-2�ͻ�����ʾjpg�ļ�View.cpp �еĵ��԰汾
inline CCTest62�ͻ�����ʾjpg�ļ�Doc* CCTest62�ͻ�����ʾjpg�ļ�View::GetDocument() const
   { return reinterpret_cast<CCTest62�ͻ�����ʾjpg�ļ�Doc*>(m_pDocument); }
#endif

