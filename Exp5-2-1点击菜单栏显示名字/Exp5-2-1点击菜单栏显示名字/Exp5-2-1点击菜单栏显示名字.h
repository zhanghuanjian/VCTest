
// Exp5-2-1点击菜单栏显示名字.h : Exp5-2-1点击菜单栏显示名字 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CExp521点击菜单栏显示名字App:
// 有关此类的实现，请参阅 Exp5-2-1点击菜单栏显示名字.cpp
//

class CExp521点击菜单栏显示名字App : public CWinApp
{
public:
	CExp521点击菜单栏显示名字App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CExp521点击菜单栏显示名字App theApp;
