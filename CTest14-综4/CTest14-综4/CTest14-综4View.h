
// CTest14-��4View.h : CCTest14��4View ��Ľӿ�
//

#pragma once

class CCTest14��4Set;

class CCTest14��4View : public CRecordView
{
protected: // �������л�����
	CCTest14��4View();
	DECLARE_DYNCREATE(CCTest14��4View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST144_FORM };
#endif
	CCTest14��4Set* m_pSet;

// ����
public:
	CCTest14��4Doc* GetDocument() const;

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
	virtual ~CCTest14��4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString a;
	CString b;
	CString c;
	CString d;
	CString e;
	CString f;
	CString g;
	CString h;
	afx_msg void OnSearch();
	afx_msg void OnSort();
	afx_msg void OnTraversal();
};

#ifndef _DEBUG  // CTest14-��4View.cpp �еĵ��԰汾
inline CCTest14��4Doc* CCTest14��4View::GetDocument() const
   { return reinterpret_cast<CCTest14��4Doc*>(m_pDocument); }
#endif

