
// CT14-��5View.h : CCT14��5View ��Ľӿ�
//

#pragma once

class CCT14��5Set;

class CCT14��5View : public CRecordView
{
protected: // �������л�����
	CCT14��5View();
	DECLARE_DYNCREATE(CCT14��5View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CT145_FORM };
#endif
	CCT14��5Set* m_pSet;

// ����
public:
	CCT14��5Doc* GetDocument() const;

// ����
public:
	CString  path;

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CCT14��5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRecordFirst();
	CString m_jpg;
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // CT14-��5View.cpp �еĵ��԰汾
inline CCT14��5Doc* CCT14��5View::GetDocument() const
   { return reinterpret_cast<CCT14��5Doc*>(m_pDocument); }
#endif

