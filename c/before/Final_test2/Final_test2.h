// Final_test2.h : main header file for the FINAL_TEST2 application
//

#if !defined(AFX_FINAL_TEST2_H__CA74FF2D_BA52_4D01_BC3A_FD389D7E3272__INCLUDED_)
#define AFX_FINAL_TEST2_H__CA74FF2D_BA52_4D01_BC3A_FD389D7E3272__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CFinal_test2App:
// See Final_test2.cpp for the implementation of this class
//

class CFinal_test2App : public CWinApp
{
public:
	CFinal_test2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFinal_test2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CFinal_test2App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FINAL_TEST2_H__CA74FF2D_BA52_4D01_BC3A_FD389D7E3272__INCLUDED_)
