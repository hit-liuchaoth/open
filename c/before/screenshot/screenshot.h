// screenshot.h : main header file for the SCREENSHOT application
//

#if !defined(AFX_SCREENSHOT_H__FDE68A79_C8A5_4DE0_878D_58104C7490CD__INCLUDED_)
#define AFX_SCREENSHOT_H__FDE68A79_C8A5_4DE0_878D_58104C7490CD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CScreenshotApp:
// See screenshot.cpp for the implementation of this class
//

class CScreenshotApp : public CWinApp
{
public:
	CScreenshotApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CScreenshotApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CScreenshotApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCREENSHOT_H__FDE68A79_C8A5_4DE0_878D_58104C7490CD__INCLUDED_)
