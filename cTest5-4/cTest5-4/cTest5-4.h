
// cTest5-4.h : cTest5-4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CcTest54App:
// �йش����ʵ�֣������ cTest5-4.cpp
//

class CcTest54App : public CWinApp
{
public:
	CcTest54App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CcTest54App theApp;
