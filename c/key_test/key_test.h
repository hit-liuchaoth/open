// key_test.h : main header file for the KEY_TEST application
//

#if !defined(AFX_KEY_TEST_H__758CE624_AAAA_4839_8172_98C3C68E9F09__INCLUDED_)
#define AFX_KEY_TEST_H__758CE624_AAAA_4839_8172_98C3C68E9F09__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CKey_testApp:
// See key_test.cpp for the implementation of this class
//

class CKey_testApp : public CWinApp
{
public:
	CKey_testApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CKey_testApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CKey_testApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_KEY_TEST_H__758CE624_AAAA_4839_8172_98C3C68E9F09__INCLUDED_)
