// new3.h : main header file for the NEW3 application
//

#if !defined(AFX_NEW3_H__FFA9EAC6_7032_4E6D_A21A_E9D9981A960B__INCLUDED_)
#define AFX_NEW3_H__FFA9EAC6_7032_4E6D_A21A_E9D9981A960B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CNew3App:
// See new3.cpp for the implementation of this class
//

class CNew3App : public CWinApp
{
public:
	CNew3App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNew3App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CNew3App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEW3_H__FFA9EAC6_7032_4E6D_A21A_E9D9981A960B__INCLUDED_)
