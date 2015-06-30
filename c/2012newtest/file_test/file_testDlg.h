// file_testDlg.h : header file
//

#if !defined(AFX_FILE_TESTDLG_H__71E15F8E_A1C0_4AED_AD3F_E345EBADCBB5__INCLUDED_)
#define AFX_FILE_TESTDLG_H__71E15F8E_A1C0_4AED_AD3F_E345EBADCBB5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CFile_testDlg dialog

class CFile_testDlg : public CDialog
{
// Construction
public:
	CFile_testDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CFile_testDlg)
	enum { IDD = IDD_FILE_TEST_DIALOG };
	CString	m_edit1;
	CString	m_edit2;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFile_testDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CFile_testDlg)
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

#endif // !defined(AFX_FILE_TESTDLG_H__71E15F8E_A1C0_4AED_AD3F_E345EBADCBB5__INCLUDED_)
