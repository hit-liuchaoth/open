// CAD_5_23.h : main header file for the CAD_5_23 application
//

#if !defined(AFX_CAD_5_23_H__483185EC_4E14_4E59_BB5B_B47DA345FFAC__INCLUDED_)
#define AFX_CAD_5_23_H__483185EC_4E14_4E59_BB5B_B47DA345FFAC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCAD_5_23App:
// See CAD_5_23.cpp for the implementation of this class
//

class CCAD_5_23App : public CWinApp
{
public:
	CCAD_5_23App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCAD_5_23App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCAD_5_23App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CAD_5_23_H__483185EC_4E14_4E59_BB5B_B47DA345FFAC__INCLUDED_)
