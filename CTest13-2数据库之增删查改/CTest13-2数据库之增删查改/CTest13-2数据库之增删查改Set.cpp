
// CTest13-2���ݿ�֮��ɾ���Set.cpp : CCTest132���ݿ�֮��ɾ���Set ���ʵ��
//

#include "stdafx.h"
#include "CTest13-2���ݿ�֮��ɾ���.h"
#include "CTest13-2���ݿ�֮��ɾ���Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest132���ݿ�֮��ɾ���Set ʵ��

// ���������� 2020��5��19��, 15:06

IMPLEMENT_DYNAMIC(CCTest132���ݿ�֮��ɾ���Set, CRecordset)

CCTest132���ݿ�֮��ɾ���Set::CCTest132���ݿ�֮��ɾ���Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = 0;
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
   //#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CCTest132���ݿ�֮��ɾ���Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x7efc\x5408\x5b9e\x9a8c\x4e4b\x4e09;DBQ=D:\\MFC\x6570\x636e\x5e93\\Database2.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CCTest132���ݿ�֮��ɾ���Set::GetDefaultSQL()
{
	return _T("[�ۺ�ʵ��֮��]");
}

void CCTest132���ݿ�֮��ɾ���Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[�ֶ�1]"), m_1);

}
/////////////////////////////////////////////////////////////////////////////
// CCTest132���ݿ�֮��ɾ���Set ���

#ifdef _DEBUG
void CCTest132���ݿ�֮��ɾ���Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCTest132���ݿ�֮��ɾ���Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

