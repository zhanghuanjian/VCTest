
// CTest3-4左键按下求和.h : CTest3-4左键按下求和 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest34左键按下求和App:
// 有关此类的实现，请参阅 CTest3-4左键按下求和.cpp
//

class CCTest34左键按下求和App : public CWinApp
{
public:
	CCTest34左键按下求和App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest34左键按下求和App theApp;
