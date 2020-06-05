
// CTest2-4画菱形.h : CTest2-4画菱形 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest24画菱形App:
// 有关此类的实现，请参阅 CTest2-4画菱形.cpp
//

class CCTest24画菱形App : public CWinApp
{
public:
	CCTest24画菱形App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest24画菱形App theApp;
