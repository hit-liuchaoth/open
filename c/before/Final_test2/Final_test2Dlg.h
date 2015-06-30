// Final_test2Dlg.h : header file
//
//{{AFX_INCLUDES()
#include "mscomm.h"
//}}AFX_INCLUDES

#if !defined(AFX_FINAL_TEST2DLG_H__8869BBBB_D492_43A6_ACAB_C3FC4CAB860F__INCLUDED_)
#define AFX_FINAL_TEST2DLG_H__8869BBBB_D492_43A6_ACAB_C3FC4CAB860F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CFinal_test2Dlg dialog

class CFinal_test2Dlg : public CDialog
{
// Construction
public:
	CFinal_test2Dlg(CWnd* pParent = NULL);	// standard constructor
	unsigned char tempchar[2048];
	unsigned int char_left;
	unsigned int count;
	unsigned int ret;
// Dialog Data
	//{{AFX_DATA(CFinal_test2Dlg)
	enum { IDD = IDD_FINAL_TEST2_DIALOG };
	CMSComm	m_uart;
	CString	m_data;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFinal_test2Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CFinal_test2Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnOnCommMscomm1();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnTimer(UINT nIDEvent);
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FINAL_TEST2DLG_H__8869BBBB_D492_43A6_ACAB_C3FC4CAB860F__INCLUDED_)
