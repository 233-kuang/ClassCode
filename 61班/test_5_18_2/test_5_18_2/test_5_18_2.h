
// test_5_18_2.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Ctest_5_18_2App:
// �йش����ʵ�֣������ test_5_18_2.cpp
//

class Ctest_5_18_2App : public CWinApp
{
public:
	Ctest_5_18_2App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Ctest_5_18_2App theApp;