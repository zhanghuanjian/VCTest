
// Ctest4-1����ƶ�����.h : Ctest4-1����ƶ����� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCtest41����ƶ�����App:
// �йش����ʵ�֣������ Ctest4-1����ƶ�����.cpp
//

class CCtest41����ƶ�����App : public CWinApp
{
public:
	CCtest41����ƶ�����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCtest41����ƶ�����App theApp;
