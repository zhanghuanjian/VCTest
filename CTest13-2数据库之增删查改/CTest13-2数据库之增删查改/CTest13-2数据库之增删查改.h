
// CTest13-2���ݿ�֮��ɾ���.h : CTest13-2���ݿ�֮��ɾ��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest132���ݿ�֮��ɾ���App:
// �йش����ʵ�֣������ CTest13-2���ݿ�֮��ɾ���.cpp
//

class CCTest132���ݿ�֮��ɾ���App : public CWinApp
{
public:
	CCTest132���ݿ�֮��ɾ���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest132���ݿ�֮��ɾ���App theApp;
