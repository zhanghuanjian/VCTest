
// CTest12-2�ۺ�ʵ��1.h : CTest12-2�ۺ�ʵ��1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest122�ۺ�ʵ��1App:
// �йش����ʵ�֣������ CTest12-2�ۺ�ʵ��1.cpp
//

class CCTest122�ۺ�ʵ��1App : public CWinApp
{
public:
	CCTest122�ۺ�ʵ��1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest122�ۺ�ʵ��1App theApp;
