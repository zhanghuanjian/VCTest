
// CTest13-�ۺ϶�Set.cpp : CCTest13�ۺ϶�Set ���ʵ��
//

#include "stdafx.h"
#include "CTest13-�ۺ϶�.h"
#include "CTest13-�ۺ϶�Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest13�ۺ϶�Set ʵ��

// ���������� 2020��6��8��, 23:55

IMPLEMENT_DYNAMIC(CCTest13�ۺ϶�Set, CRecordset)

CCTest13�ۺ϶�Set::CCTest13�ۺ϶�Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CCTest13�ۺ϶�Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90-\x56fe\x7247\x8def\x5f84;DBQ=D:\\MFC\x6570\x636e\x5e93\\Database3.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CCTest13�ۺ϶�Set::GetDefaultSQL()
{
	return _T("[�ۺ�ʵ��1]");
}

void CCTest13�ۺ϶�Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);

}
/////////////////////////////////////////////////////////////////////////////
// CCTest13�ۺ϶�Set ���

#ifdef _DEBUG
void CCTest13�ۺ϶�Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCTest13�ۺ϶�Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

