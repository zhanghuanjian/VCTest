
// CTest13-2���ݿ�֮��ɾ���View.h : CCTest132���ݿ�֮��ɾ���View ��Ľӿ�
//

#pragma once

class CCTest132���ݿ�֮��ɾ���Set;

class CCTest132���ݿ�֮��ɾ���View : public CRecordView
{
protected: // �������л�����
	CCTest132���ݿ�֮��ɾ���View();
	DECLARE_DYNCREATE(CCTest132���ݿ�֮��ɾ���View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST132_FORM };
#endif
	CCTest132���ݿ�֮��ɾ���Set* m_pSet;

// ����
public:
	CCTest132���ݿ�֮��ɾ���Doc* GetDocument() const;

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
	virtual ~CCTest132���ݿ�֮��ɾ���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long number;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // CTest13-2���ݿ�֮��ɾ���View.cpp �еĵ��԰汾
inline CCTest132���ݿ�֮��ɾ���Doc* CCTest132���ݿ�֮��ɾ���View::GetDocument() const
   { return reinterpret_cast<CCTest132���ݿ�֮��ɾ���Doc*>(m_pDocument); }
#endif

