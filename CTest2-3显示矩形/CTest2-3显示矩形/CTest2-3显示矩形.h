
// CTest2-3显示矩形.h : CTest2-3显示矩形 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest23显示矩形App:
// 有关此类的实现，请参阅 CTest2-3显示矩形.cpp
//

class CCTest23显示矩形App : public CWinApp
{
public:
	CCTest23显示矩形App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest23显示矩形App theApp;
