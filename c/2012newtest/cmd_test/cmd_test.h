// cmd_test.h : main header file for the CMD_TEST application
//

#if !defined(AFX_CMD_TEST_H__EA12E64A_193C_4447_B90A_869EDE475F9C__INCLUDED_)
#define AFX_CMD_TEST_H__EA12E64A_193C_4447_B90A_869EDE475F9C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCmd_testApp:
// See cmd_test.cpp for the implementation of this class
//

class CCmd_testApp : public CWinApp
{
public:
	CCmd_testApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCmd_testApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCmd_testApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CMD_TEST_H__EA12E64A_193C_4447_B90A_869EDE475F9C__INCLUDED_)
