
// CTest14-��4Set.cpp : CCTest14��4Set ���ʵ��
//

#include "stdafx.h"
#include "CTest14-��4.h"
#include "CTest14-��4Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest14��4Set ʵ��

// ���������� 2020��6��8��, 22:29

IMPLEMENT_DYNAMIC(CCTest14��4Set, CRecordset)

CCTest14��4Set::CCTest14��4Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = L"";
	column3 = L"";
	column4 = L"";
	column5 = L"";
	column6 = L"";
	column7 = L"";
	column8 = L"";
	m_nFields = 9;
	m_nDefaultType = snapshot;
}
  //#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CCTest14��4Set::GetDefaultConnect()
{
	return _T("DBQ=D:\\MFC\x6570\x636e\x5e93\\Database4.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CCTest14��4Set::GetDefaultSQL()
{
	return _T("[��ʮ����ʵ��]");
}

void CCTest14��4Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[רҵ]"), column3);
	RFX_Text(pFX, _T("[�Ա�]"), column4);
	RFX_Text(pFX, _T("[��������]"), column5);
	RFX_Text(pFX, _T("[�ֻ�����]"), column6);
	RFX_Text(pFX, _T("[��ͥ��ַ]"), column7);
	RFX_Text(pFX, _T("[��Ƭ�ļ���]"), column8);

}
/////////////////////////////////////////////////////////////////////////////
// CCTest14��4Set ���

#ifdef _DEBUG
void CCTest14��4Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCTest14��4Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

