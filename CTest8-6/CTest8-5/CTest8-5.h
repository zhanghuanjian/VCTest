
// CTest8-5.h : CTest8-5 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest85App:
// �йش����ʵ�֣������ CTest8-5.cpp
//

class CCTest85App : public CWinApp
{
public:
	CCTest85App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest85App theApp;
