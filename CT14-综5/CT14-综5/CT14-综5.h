
// CT14-综5.h : CT14-综5 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCT14综5App:
// 有关此类的实现，请参阅 CT14-综5.cpp
//

class CCT14综5App : public CWinApp
{
public:
	CCT14综5App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCT14综5App theApp;
