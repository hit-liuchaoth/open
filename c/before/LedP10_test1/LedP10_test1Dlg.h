// LedP10_test1Dlg.h : header file
//

#if !defined(AFX_LEDP10_TEST1DLG_H__8AF3C9E7_D5F9_4EDD_BEF9_40D5652D87EE__INCLUDED_)
#define AFX_LEDP10_TEST1DLG_H__8AF3C9E7_D5F9_4EDD_BEF9_40D5652D87EE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CLedP10_test1Dlg dialog

class CLedP10_test1Dlg : public CDialog
{
// Construction
public:
	CLedP10_test1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CLedP10_test1Dlg)
	enum { IDD = IDD_LEDP10_TEST1_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLedP10_test1Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CLedP10_test1Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LEDP10_TEST1DLG_H__8AF3C9E7_D5F9_4EDD_BEF9_40D5652D87EE__INCLUDED_)
