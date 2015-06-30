// file_test.h : main header file for the FILE_TEST application
//

#if !defined(AFX_FILE_TEST_H__A8230E74_A7EA_4136_A4A9_999B17518CA9__INCLUDED_)
#define AFX_FILE_TEST_H__A8230E74_A7EA_4136_A4A9_999B17518CA9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CFile_testApp:
// See file_test.cpp for the implementation of this class
//

class CFile_testApp : public CWinApp
{
public:
	CFile_testApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFile_testApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CFile_testApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FILE_TEST_H__A8230E74_A7EA_4136_A4A9_999B17518CA9__INCLUDED_)
