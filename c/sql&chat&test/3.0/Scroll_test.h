// Scroll_test.h : main header file for the SCROLL_TEST application
//

#if !defined(AFX_SCROLL_TEST_H__0F6F1525_1385_401C_A55C_0E8C8642F5A7__INCLUDED_)
#define AFX_SCROLL_TEST_H__0F6F1525_1385_401C_A55C_0E8C8642F5A7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CScroll_testApp:
// See Scroll_test.cpp for the implementation of this class
//

class CScroll_testApp : public CWinApp
{
public:
	CScroll_testApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CScroll_testApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CScroll_testApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCROLL_TEST_H__0F6F1525_1385_401C_A55C_0E8C8642F5A7__INCLUDED_)
