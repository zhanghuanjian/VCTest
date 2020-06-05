
// CTest13-2数据库之增删查改.h : CTest13-2数据库之增删查改 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest132数据库之增删查改App:
// 有关此类的实现，请参阅 CTest13-2数据库之增删查改.cpp
//

class CCTest132数据库之增删查改App : public CWinApp
{
public:
	CCTest132数据库之增删查改App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest132数据库之增删查改App theApp;
