
// CTest14-��4.h : CTest14-��4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest14��4App:
// �йش����ʵ�֣������ CTest14-��4.cpp
//

class CCTest14��4App : public CWinApp
{
public:
	CCTest14��4App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest14��4App theApp;
