// Socket_testDlg.h : header file
//

#if !defined(AFX_SOCKET_TESTDLG_H__54582BF1_E77A_4342_B3E1_9D4F8A89C344__INCLUDED_)
#define AFX_SOCKET_TESTDLG_H__54582BF1_E77A_4342_B3E1_9D4F8A89C344__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CSocket_testDlg dialog

class CSocket_testDlg : public CDialog
{
// Construction
public:
	CSocket_testDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSocket_testDlg)
	enum { IDD = IDD_SOCKET_TEST_DIALOG };
	CString	m_edit1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSocket_testDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CSocket_testDlg)
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

#endif // !defined(AFX_SOCKET_TESTDLG_H__54582BF1_E77A_4342_B3E1_9D4F8A89C344__INCLUDED_)
