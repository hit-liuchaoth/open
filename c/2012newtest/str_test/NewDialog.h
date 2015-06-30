#if !defined(AFX_NEWDIALOG_H__CA73360A_5E7F_4EBA_8ABB_C505A4400A67__INCLUDED_)
#define AFX_NEWDIALOG_H__CA73360A_5E7F_4EBA_8ABB_C505A4400A67__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NewDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// NewDialog dialog

class NewDialog : public CDialog
{
// Construction
public:
	NewDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(NewDialog)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(NewDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(NewDialog)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEWDIALOG_H__CA73360A_5E7F_4EBA_8ABB_C505A4400A67__INCLUDED_)
