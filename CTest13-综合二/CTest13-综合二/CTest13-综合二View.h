
// CTest13-�ۺ϶�View.h : CCTest13�ۺ϶�View ��Ľӿ�
//

#pragma once

class CCTest13�ۺ϶�Set;

class CCTest13�ۺ϶�View : public CRecordView
{
protected: // �������л�����
	CCTest13�ۺ϶�View();
	DECLARE_DYNCREATE(CCTest13�ۺ϶�View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST13_FORM };
#endif
	CCTest13�ۺ϶�Set* m_pSet;

// ����
public:
	CCTest13�ۺ϶�Doc* GetDocument() const;
	void draw_pic(CString file);
// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CCTest13�ۺ϶�View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString pathname;
	CString path;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // CTest13-�ۺ϶�View.cpp �еĵ��԰汾
inline CCTest13�ۺ϶�Doc* CCTest13�ۺ϶�View::GetDocument() const
   { return reinterpret_cast<CCTest13�ۺ϶�Doc*>(m_pDocument); }
#endif

