
// CTest13-2MFC���ݿ����ɾ���.h : CTest13-2MFC���ݿ����ɾ��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest132MFC���ݿ����ɾ���App:
// �йش����ʵ�֣������ CTest13-2MFC���ݿ����ɾ���.cpp
//

class CCTest132MFC���ݿ����ɾ���App : public CWinApp
{
public:
	CCTest132MFC���ݿ����ɾ���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest132MFC���ݿ����ɾ���App theApp;
