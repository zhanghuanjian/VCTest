
// CTest9-3动态加载(居中).h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CCTest93动态加载居中App: 
// 有关此类的实现，请参阅 CTest9-3动态加载(居中).cpp
//

class CCTest93动态加载居中App : public CWinApp
{
public:
	CCTest93动态加载居中App();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern CCTest93动态加载居中App theApp;