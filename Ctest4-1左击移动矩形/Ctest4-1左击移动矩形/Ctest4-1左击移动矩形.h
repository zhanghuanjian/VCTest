
// Ctest4-1左击移动矩形.h : Ctest4-1左击移动矩形 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCtest41左击移动矩形App:
// 有关此类的实现，请参阅 Ctest4-1左击移动矩形.cpp
//

class CCtest41左击移动矩形App : public CWinApp
{
public:
	CCtest41左击移动矩形App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCtest41左击移动矩形App theApp;
