
// ʵ��8-2-1���׼�����.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cʵ��821���׼�����App: 
// �йش����ʵ�֣������ ʵ��8-2-1���׼�����.cpp
//

class Cʵ��821���׼�����App : public CWinApp
{
public:
	Cʵ��821���׼�����App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cʵ��821���׼�����App theApp;