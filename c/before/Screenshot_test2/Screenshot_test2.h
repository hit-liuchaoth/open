// Screenshot_test2.h : main header file for the SCREENSHOT_TEST2 application
//

#if !defined(AFX_SCREENSHOT_TEST2_H__58996DC2_B6D5_4893_829A_F0452F057505__INCLUDED_)
#define AFX_SCREENSHOT_TEST2_H__58996DC2_B6D5_4893_829A_F0452F057505__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CScreenshot_test2App:
// See Screenshot_test2.cpp for the implementation of this class
//

class CScreenshot_test2App : public CWinApp
{
public:
	CScreenshot_test2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CScreenshot_test2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CScreenshot_test2App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCREENSHOT_TEST2_H__58996DC2_B6D5_4893_829A_F0452F057505__INCLUDED_)
