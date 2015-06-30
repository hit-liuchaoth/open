// bigfish_test3.h : main header file for the BIGFISH_TEST3 application
//

#if !defined(AFX_BIGFISH_TEST3_H__3A817313_16F1_4AA3_BC77_0B5884323638__INCLUDED_)
#define AFX_BIGFISH_TEST3_H__3A817313_16F1_4AA3_BC77_0B5884323638__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test3App:
// See bigfish_test3.cpp for the implementation of this class
//

class CBigfish_test3App : public CWinApp
{
public:
	CBigfish_test3App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBigfish_test3App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CBigfish_test3App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BIGFISH_TEST3_H__3A817313_16F1_4AA3_BC77_0B5884323638__INCLUDED_)
