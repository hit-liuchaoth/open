// work_1090110114.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "work_1090110114.h"
#include "work_1090110114Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CWork_1090110114App

BEGIN_MESSAGE_MAP(CWork_1090110114App, CWinApp)
	//{{AFX_MSG_MAP(CWork_1090110114App)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWork_1090110114App construction

CWork_1090110114App::CWork_1090110114App()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CWork_1090110114App object

CWork_1090110114App theApp;

/////////////////////////////////////////////////////////////////////////////
// CWork_1090110114App initialization

BOOL CWork_1090110114App::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

	CWork_1090110114Dlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
	}
	else if (nResponse == IDCANCEL)
	{
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
