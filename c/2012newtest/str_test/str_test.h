// str_test.h : main header file for the STR_TEST application
//

#if !defined(AFX_STR_TEST_H__AC81A689_983F_4772_B33A_AEC6BB3D5377__INCLUDED_)
#define AFX_STR_TEST_H__AC81A689_983F_4772_B33A_AEC6BB3D5377__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CStr_testApp:
// See str_test.cpp for the implementation of this class
//

class CStr_testApp : public CWinApp
{
public:
	CStr_testApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStr_testApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CStr_testApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STR_TEST_H__AC81A689_983F_4772_B33A_AEC6BB3D5377__INCLUDED_)
