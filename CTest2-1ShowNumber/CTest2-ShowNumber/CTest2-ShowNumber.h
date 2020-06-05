
// CTest2-ShowNumber.h : CTest2-ShowNumber 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest2ShowNumberApp:
// 有关此类的实现，请参阅 CTest2-ShowNumber.cpp
//

class CCTest2ShowNumberApp : public CWinApp
{
public:
	CCTest2ShowNumberApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest2ShowNumberApp theApp;
