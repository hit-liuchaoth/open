// Screenshot_test3.h : main header file for the SCREENSHOT_TEST3 application
//

#if !defined(AFX_SCREENSHOT_TEST3_H__D739BE0D_4892_4D9D_B22D_090B7658D7DF__INCLUDED_)
#define AFX_SCREENSHOT_TEST3_H__D739BE0D_4892_4D9D_B22D_090B7658D7DF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CScreenshot_test3App:
// See Screenshot_test3.cpp for the implementation of this class
//

class CScreenshot_test3App : public CWinApp
{
public:
	CScreenshot_test3App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CScreenshot_test3App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CScreenshot_test3App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCREENSHOT_TEST3_H__D739BE0D_4892_4D9D_B22D_090B7658D7DF__INCLUDED_)
