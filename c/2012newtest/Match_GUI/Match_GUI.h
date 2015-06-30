// Match_GUI.h : main header file for the MATCH_GUI application
//

#if !defined(AFX_MATCH_GUI_H__291443D5_072C_4AA5_A3BD_9D232BCBCB2F__INCLUDED_)
#define AFX_MATCH_GUI_H__291443D5_072C_4AA5_A3BD_9D232BCBCB2F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMatch_GUIApp:
// See Match_GUI.cpp for the implementation of this class
//

class CMatch_GUIApp : public CWinApp
{
public:
	CMatch_GUIApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMatch_GUIApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMatch_GUIApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MATCH_GUI_H__291443D5_072C_4AA5_A3BD_9D232BCBCB2F__INCLUDED_)
