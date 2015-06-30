// Connect_test1.h : main header file for the CONNECT_TEST1 application
//

#if !defined(AFX_CONNECT_TEST1_H__19E0B59D_D9E3_4870_AA1E_9326C806C4D8__INCLUDED_)
#define AFX_CONNECT_TEST1_H__19E0B59D_D9E3_4870_AA1E_9326C806C4D8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CConnect_test1App:
// See Connect_test1.cpp for the implementation of this class
//

class CConnect_test1App : public CWinApp
{
public:
	CConnect_test1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CConnect_test1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CConnect_test1App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONNECT_TEST1_H__19E0B59D_D9E3_4870_AA1E_9326C806C4D8__INCLUDED_)
