// Serial_test1.h : main header file for the SERIAL_TEST1 application
//

#if !defined(AFX_SERIAL_TEST1_H__167C3DAA_A4A4_4BB2_A120_131926E86C73__INCLUDED_)
#define AFX_SERIAL_TEST1_H__167C3DAA_A4A4_4BB2_A120_131926E86C73__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSerial_test1App:
// See Serial_test1.cpp for the implementation of this class
//

class CSerial_test1App : public CWinApp
{
public:
	CSerial_test1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSerial_test1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSerial_test1App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIAL_TEST1_H__167C3DAA_A4A4_4BB2_A120_131926E86C73__INCLUDED_)
