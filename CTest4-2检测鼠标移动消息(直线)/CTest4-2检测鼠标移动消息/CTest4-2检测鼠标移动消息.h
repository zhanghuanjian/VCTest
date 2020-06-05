
// CTest4-2检测鼠标移动消息.h : CTest4-2检测鼠标移动消息 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest42检测鼠标移动消息App:
// 有关此类的实现，请参阅 CTest4-2检测鼠标移动消息.cpp
//

class CCTest42检测鼠标移动消息App : public CWinApp
{
public:
	CCTest42检测鼠标移动消息App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest42检测鼠标移动消息App theApp;
