
// CTest12-2�ۺ�ʵ��1View.h : CCTest122�ۺ�ʵ��1View ��Ľӿ�
//

#pragma once

class CCTest122�ۺ�ʵ��1Set;

class CCTest122�ۺ�ʵ��1View : public CRecordView
{
protected: // �������л�����
	CCTest122�ۺ�ʵ��1View();
	DECLARE_DYNCREATE(CCTest122�ۺ�ʵ��1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST1221_FORM };
#endif
	CCTest122�ۺ�ʵ��1Set* m_pSet;
	CString path;

// ����
public:
	CCTest122�ۺ�ʵ��1Doc* GetDocument() const;
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
	virtual ~CCTest122�ۺ�ʵ��1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString i;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // CTest12-2�ۺ�ʵ��1View.cpp �еĵ��԰汾
inline CCTest122�ۺ�ʵ��1Doc* CCTest122�ۺ�ʵ��1View::GetDocument() const
   { return reinterpret_cast<CCTest122�ۺ�ʵ��1Doc*>(m_pDocument); }
#endif

