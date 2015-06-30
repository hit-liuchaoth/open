// Side_test.h : main header file for the SIDE_TEST application
//

#if !defined(AFX_SIDE_TEST_H__09225775_B977_42B1_A34E_59EF34E9E88C__INCLUDED_)
#define AFX_SIDE_TEST_H__09225775_B977_42B1_A34E_59EF34E9E88C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSide_testApp:
// See Side_test.cpp for the implementation of this class
//

class CSide_testApp : public CWinApp
{
public:
	CSide_testApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSide_testApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CSide_testApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SIDE_TEST_H__09225775_B977_42B1_A34E_59EF34E9E88C__INCLUDED_)
