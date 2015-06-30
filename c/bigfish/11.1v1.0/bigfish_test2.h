// bigfish_test2.h : main header file for the BIGFISH_TEST2 application
//

#if !defined(AFX_BIGFISH_TEST2_H__9EBA4B49_5BF1_45BC_BC1B_715BE89F73AD__INCLUDED_)
#define AFX_BIGFISH_TEST2_H__9EBA4B49_5BF1_45BC_BC1B_715BE89F73AD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test2App:
// See bigfish_test2.cpp for the implementation of this class
//

class CBigfish_test2App : public CWinApp
{
public:
	CBigfish_test2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBigfish_test2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CBigfish_test2App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BIGFISH_TEST2_H__9EBA4B49_5BF1_45BC_BC1B_715BE89F73AD__INCLUDED_)
