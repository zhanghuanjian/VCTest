
// CT14-��5.h : CT14-��5 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCT14��5App:
// �йش����ʵ�֣������ CT14-��5.cpp
//

class CCT14��5App : public CWinApp
{
public:
	CCT14��5App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCT14��5App theApp;
