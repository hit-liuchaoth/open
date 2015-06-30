// NewDialog.cpp : implementation file
//

#include "stdafx.h"
#include "str_test.h"
#include "NewDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// NewDialog dialog


NewDialog::NewDialog(CWnd* pParent /*=NULL*/)
	: CDialog(NewDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(NewDialog)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void NewDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(NewDialog)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(NewDialog, CDialog)
	//{{AFX_MSG_MAP(NewDialog)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// NewDialog message handlers
