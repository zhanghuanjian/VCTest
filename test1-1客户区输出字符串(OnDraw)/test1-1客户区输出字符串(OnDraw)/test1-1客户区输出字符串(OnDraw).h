
// test1-1客户区输出字符串(OnDraw).h : test1-1客户区输出字符串(OnDraw) 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// Ctest11客户区输出字符串OnDrawApp:
// 有关此类的实现，请参阅 test1-1客户区输出字符串(OnDraw).cpp
//

class Ctest11客户区输出字符串OnDrawApp : public CWinApp
{
public:
	Ctest11客户区输出字符串OnDrawApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctest11客户区输出字符串OnDrawApp theApp;
