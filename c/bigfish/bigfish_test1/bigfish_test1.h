// bigfish_test1.h : main header file for the BIGFISH_TEST1 application
//

#if !defined(AFX_BIGFISH_TEST1_H__BF4FB8BF_80E9_4638_9027_EA7B530A4456__INCLUDED_)
#define AFX_BIGFISH_TEST1_H__BF4FB8BF_80E9_4638_9027_EA7B530A4456__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test1App:
// See bigfish_test1.cpp for the implementation of this class
//

class CBigfish_test1App : public CWinApp
{
public:
	CBigfish_test1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBigfish_test1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CBigfish_test1App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BIGFISH_TEST1_H__BF4FB8BF_80E9_4638_9027_EA7B530A4456__INCLUDED_)
