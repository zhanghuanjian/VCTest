
// CTest13-�ۺ϶�.h : CTest13-�ۺ϶� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest13�ۺ϶�App:
// �йش����ʵ�֣������ CTest13-�ۺ϶�.cpp
//

class CCTest13�ۺ϶�App : public CWinApp
{
public:
	CCTest13�ۺ϶�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest13�ۺ϶�App theApp;
