// deletename.cpp : implementation file
//

#include "stdafx.h"
#include "Match_GUI.h"
#include "deletename.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// deletename dialog


deletename::deletename(CWnd* pParent /*=NULL*/)
	: CDialog(deletename::IDD, pParent)
{
	//{{AFX_DATA_INIT(deletename)
	m_delete_name = _T("");

	//}}AFX_DATA_INIT
}


void deletename::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(deletename)
	DDX_Text(pDX, IDC_EDIT1, m_delete_name);
	DDV_MaxChars(pDX, m_delete_name, 8);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(deletename, CDialog)
	//{{AFX_MSG_MAP(deletename)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// deletename message handlers
void deletename::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(TRUE);
	strcpy(des,m_delete_name);
	CDialog::OnOK();
}

void deletename::get(char *p)
{
	des=p;
}

void deletename::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}
