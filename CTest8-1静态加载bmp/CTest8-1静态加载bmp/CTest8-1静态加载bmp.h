
// CTest8-1静态加载bmp.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CCTest81静态加载bmpApp: 
// 有关此类的实现，请参阅 CTest8-1静态加载bmp.cpp
//

class CCTest81静态加载bmpApp : public CWinApp
{
public:
	CCTest81静态加载bmpApp();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern CCTest81静态加载bmpApp theApp;