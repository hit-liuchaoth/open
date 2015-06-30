// 2D_code.h : main header file for the 2D_CODE application
//

#if !defined(AFX_2D_CODE_H__831993DA_DC43_4E54_A6BF_F413F9C34FBA__INCLUDED_)
#define AFX_2D_CODE_H__831993DA_DC43_4E54_A6BF_F413F9C34FBA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy2D_codeApp:
// See 2D_code.cpp for the implementation of this class
//

class CMy2D_codeApp : public CWinApp
{
public:
	CMy2D_codeApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy2D_codeApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMy2D_codeApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_2D_CODE_H__831993DA_DC43_4E54_A6BF_F413F9C34FBA__INCLUDED_)
