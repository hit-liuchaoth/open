// Connect_test1Dlg.h : header file
//

#if !defined(AFX_CONNECT_TEST1DLG_H__20F6EB62_8FB6_42DB_BDE3_620D102E97DD__INCLUDED_)
#define AFX_CONNECT_TEST1DLG_H__20F6EB62_8FB6_42DB_BDE3_620D102E97DD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CConnect_test1Dlg dialog

class CConnect_test1Dlg : public CDialog
{
// Construction
public:
	CConnect_test1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CConnect_test1Dlg)
	enum { IDD = IDD_CONNECT_TEST1_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CConnect_test1Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CConnect_test1Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONNECT_TEST1DLG_H__20F6EB62_8FB6_42DB_BDE3_620D102E97DD__INCLUDED_)
