// new3Dlg.h : header file
//

#if !defined(AFX_NEW3DLG_H__F8501690_E6A1_4458_82E6_7904711C471F__INCLUDED_)
#define AFX_NEW3DLG_H__F8501690_E6A1_4458_82E6_7904711C471F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CNew3Dlg dialog

class CNew3Dlg : public CDialog
{
// Construction
public:
	CNew3Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CNew3Dlg)
	enum { IDD = IDD_NEW3_DIALOG };
	CString	m_data1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNew3Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CNew3Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEW3DLG_H__F8501690_E6A1_4458_82E6_7904711C471F__INCLUDED_)
