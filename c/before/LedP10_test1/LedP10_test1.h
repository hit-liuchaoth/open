// LedP10_test1.h : main header file for the LEDP10_TEST1 application
//

#if !defined(AFX_LEDP10_TEST1_H__FEAECB34_FF1E_48D3_966C_D21122108EF9__INCLUDED_)
#define AFX_LEDP10_TEST1_H__FEAECB34_FF1E_48D3_966C_D21122108EF9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CLedP10_test1App:
// See LedP10_test1.cpp for the implementation of this class
//

class CLedP10_test1App : public CWinApp
{
public:
	CLedP10_test1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLedP10_test1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CLedP10_test1App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LEDP10_TEST1_H__FEAECB34_FF1E_48D3_966C_D21122108EF9__INCLUDED_)
