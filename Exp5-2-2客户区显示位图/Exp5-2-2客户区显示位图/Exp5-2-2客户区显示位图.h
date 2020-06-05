
// Exp5-2-2客户区显示位图.h : Exp5-2-2客户区显示位图 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CExp522客户区显示位图App:
// 有关此类的实现，请参阅 Exp5-2-2客户区显示位图.cpp
//

class CExp522客户区显示位图App : public CWinApp
{
public:
	CExp522客户区显示位图App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CExp522客户区显示位图App theApp;
