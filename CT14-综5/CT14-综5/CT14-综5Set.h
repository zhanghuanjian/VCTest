
// CT14-��5Set.h: CCT14��5Set ��Ľӿ�
//


#pragma once

// ���������� 2020��6��15��, 17:13

class CCT14��5Set : public CRecordset
{
public:
	CCT14��5Set(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CCT14��5Set)

// �ֶ�/��������

// �����ַ�������(�������)��ӳ���ݿ��ֶ�(ANSI �������͵� CStringA �� Unicode
// �������͵� CStringW)��ʵ���������͡�
//  ����Ϊ��ֹ ODBC ��������ִ�п���
// ����Ҫ��ת�������ϣ�������Խ���Щ��Ա����Ϊ
// CString ���ͣ�ODBC ��������ִ�����б�Ҫ��ת����
// (ע��: ����ʹ�� 3.5 �����߰汾�� ODBC ��������
// ��ͬʱ֧�� Unicode ����Щת��)��

	long	m_ID;
	CStringW	column1;
	CStringW	column2;
	CStringW	column3;
	CStringW	column4;
	CStringW	column5;
	CStringW	column6;
	CStringW	column7;
	CStringW	column8;

// ��д
	// �����ɵ��麯����д
	public:
	virtual CString GetDefaultConnect();	// Ĭ�������ַ���

	virtual CString GetDefaultSQL(); 	// ��¼����Ĭ�� SQL
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX ֧��

// ʵ��
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

