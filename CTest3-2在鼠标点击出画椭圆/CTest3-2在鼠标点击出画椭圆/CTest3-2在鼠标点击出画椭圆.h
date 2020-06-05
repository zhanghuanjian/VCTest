
// CTest3-2在鼠标点击出画椭圆.h : CTest3-2在鼠标点击出画椭圆 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest32在鼠标点击出画椭圆App:
// 有关此类的实现，请参阅 CTest3-2在鼠标点击出画椭圆.cpp
//

class CCTest32在鼠标点击出画椭圆App : public CWinApp
{
public:
	CCTest32在鼠标点击出画椭圆App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest32在鼠标点击出画椭圆App theApp;
