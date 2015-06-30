// other_test2.h : main header file for the OTHER_TEST2 application
//

#if !defined(AFX_OTHER_TEST2_H__4DE1FE3A_7929_48DA_A404_8B83CDE27744__INCLUDED_)
#define AFX_OTHER_TEST2_H__4DE1FE3A_7929_48DA_A404_8B83CDE27744__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// COther_test2App:
// See other_test2.cpp for the implementation of this class
//

class COther_test2App : public CWinApp
{
public:
	COther_test2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COther_test2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(COther_test2App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OTHER_TEST2_H__4DE1FE3A_7929_48DA_A404_8B83CDE27744__INCLUDED_)
