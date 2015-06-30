// Socket_test.h : main header file for the SOCKET_TEST application
//

#if !defined(AFX_SOCKET_TEST_H__24C61401_C343_4264_BBD7_D6DCAA8FCCA7__INCLUDED_)
#define AFX_SOCKET_TEST_H__24C61401_C343_4264_BBD7_D6DCAA8FCCA7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSocket_testApp:
// See Socket_test.cpp for the implementation of this class
//

class CSocket_testApp : public CWinApp
{
public:
	CSocket_testApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSocket_testApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSocket_testApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SOCKET_TEST_H__24C61401_C343_4264_BBD7_D6DCAA8FCCA7__INCLUDED_)
