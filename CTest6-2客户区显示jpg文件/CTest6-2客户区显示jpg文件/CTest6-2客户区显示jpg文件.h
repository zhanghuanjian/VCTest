
// CTest6-2�ͻ�����ʾjpg�ļ�.h : CTest6-2�ͻ�����ʾjpg�ļ� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest62�ͻ�����ʾjpg�ļ�App:
// �йش����ʵ�֣������ CTest6-2�ͻ�����ʾjpg�ļ�.cpp
//

class CCTest62�ͻ�����ʾjpg�ļ�App : public CWinApp
{
public:
	CCTest62�ͻ�����ʾjpg�ļ�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest62�ͻ�����ʾjpg�ļ�App theApp;
