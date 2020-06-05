
// CTest4-6定时器之小球落下反弹.h : CTest4-6定时器之小球落下反弹 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest46定时器之小球落下反弹App:
// 有关此类的实现，请参阅 CTest4-6定时器之小球落下反弹.cpp
//

class CCTest46定时器之小球落下反弹App : public CWinApp
{
public:
	CCTest46定时器之小球落下反弹App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest46定时器之小球落下反弹App theApp;
