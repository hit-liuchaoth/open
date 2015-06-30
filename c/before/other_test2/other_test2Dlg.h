// other_test2Dlg.h : header file
//

#if !defined(AFX_OTHER_TEST2DLG_H__C01A3BF0_E94F_47E2_BB45_4AB9C468B49B__INCLUDED_)
#define AFX_OTHER_TEST2DLG_H__C01A3BF0_E94F_47E2_BB45_4AB9C468B49B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// COther_test2Dlg dialog

class COther_test2Dlg : public CDialog
{
// Construction
public:
	COther_test2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(COther_test2Dlg)
	enum { IDD = IDD_OTHER_TEST2_DIALOG };
	CComboBox	m_data;
	UINT	m_data2;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COther_test2Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(COther_test2Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnEditchangeCombo1();
	afx_msg void OnSelchangeCombo1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OTHER_TEST2DLG_H__C01A3BF0_E94F_47E2_BB45_4AB9C468B49B__INCLUDED_)
