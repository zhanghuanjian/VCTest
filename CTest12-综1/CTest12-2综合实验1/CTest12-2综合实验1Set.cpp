
// CTest12-2�ۺ�ʵ��1Set.cpp : CCTest122�ۺ�ʵ��1Set ���ʵ��
//

#include "stdafx.h"
#include "CTest12-2�ۺ�ʵ��1.h"
#include "CTest12-2�ۺ�ʵ��1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest122�ۺ�ʵ��1Set ʵ��

// ���������� 2020��5��24��, 22:29

IMPLEMENT_DYNAMIC(CCTest122�ۺ�ʵ��1Set, CRecordset)

CCTest122�ۺ�ʵ��1Set::CCTest122�ۺ�ʵ��1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_nFields = 2;
	m_nDefaultType = snapshot;
}
  //#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CCTest122�ۺ�ʵ��1Set::GetDefaultConnect()
{
	return _T("DBQ=D:\\MFC\x6570\x636e\x5e93\\Database3.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CCTest122�ۺ�ʵ��1Set::GetDefaultSQL()
{
	return _T("[�ۺ�ʵ��1]");
}

void CCTest122�ۺ�ʵ��1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);

}
/////////////////////////////////////////////////////////////////////////////
// CCTest122�ۺ�ʵ��1Set ���

#ifdef _DEBUG
void CCTest122�ۺ�ʵ��1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCTest122�ۺ�ʵ��1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

