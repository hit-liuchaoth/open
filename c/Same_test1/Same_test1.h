// Same_test1.h : main header file for the SAME_TEST1 application
//

#if !defined(AFX_SAME_TEST1_H__34D7F8A5_E273_410A_B122_12F3C7624D60__INCLUDED_)
#define AFX_SAME_TEST1_H__34D7F8A5_E273_410A_B122_12F3C7624D60__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSame_test1App:
// See Same_test1.cpp for the implementation of this class
//

class CSame_test1App : public CWinApp
{
public:
	CSame_test1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSame_test1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CSame_test1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SAME_TEST1_H__34D7F8A5_E273_410A_B122_12F3C7624D60__INCLUDED_)
