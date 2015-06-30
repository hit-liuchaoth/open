#if !defined(AFX_DELETENAME_H__A0A77B25_5A7D_42A4_A4FB_F23680ADF312__INCLUDED_)
#define AFX_DELETENAME_H__A0A77B25_5A7D_42A4_A4FB_F23680ADF312__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// deletename.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// deletename dialog

class deletename : public CDialog
{
// Construction
public:
	deletename(CWnd* pParent = NULL);   // standard constructor
	void get(char *p);
	char *des;
// Dialog Data
	//{{AFX_DATA(deletename)
	enum { IDD = IDD_DIALOG1 };
	CString	m_delete_name;
	//}}AFX_DATA

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(deletename)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(deletename)
	virtual void OnOK();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELETENAME_H__A0A77B25_5A7D_42A4_A4FB_F23680ADF312__INCLUDED_)
