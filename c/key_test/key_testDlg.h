// key_testDlg.h : header file
//

#if !defined(AFX_KEY_TESTDLG_H__60F6971C_BD20_451B_81AE_260C2919F590__INCLUDED_)
#define AFX_KEY_TESTDLG_H__60F6971C_BD20_451B_81AE_260C2919F590__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CKey_testDlg dialog

class CKey_testDlg : public CDialog
{
// Construction
public:
	CKey_testDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CKey_testDlg)
	enum { IDD = IDD_KEY_TEST_DIALOG };
	CString	m_edit1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CKey_testDlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CKey_testDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_KEY_TESTDLG_H__60F6971C_BD20_451B_81AE_260C2919F590__INCLUDED_)
