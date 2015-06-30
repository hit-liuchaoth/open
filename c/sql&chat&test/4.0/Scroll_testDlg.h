// Scroll_testDlg.h : header file
//

#if !defined(AFX_SCROLL_TESTDLG_H__93F042F5_D9C7_4B2F_99A3_A6A4004D081E__INCLUDED_)
#define AFX_SCROLL_TESTDLG_H__93F042F5_D9C7_4B2F_99A3_A6A4004D081E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include <winsock.h>
#include <mysql.h>

//#define LINKTO "joey800616.vicp.net"
#define LINKTO "192.168.1.103"

/////////////////////////////////////////////////////////////////////////////
// CScroll_testDlg dialog

class CScroll_testDlg : public CDialog
{
// Construction
public:
	CScroll_testDlg(CWnd* pParent = NULL);	// standard constructor
		
	CString m_buffer1,m_buffer2;
	CString str_name,m_edit21,m_edit22;
	char *ask;
	MYSQL *mysql;
	MYSQL_ROW row;
	MYSQL_RES *res;



	
	



// Dialog Data
	//{{AFX_DATA(CScroll_testDlg)
	enum { IDD = IDD_SCROLL_TEST_DIALOG };
	CEdit	m_edit2;
	CString	m_edit1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CScroll_testDlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CScroll_testDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnDestroy();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCROLL_TESTDLG_H__93F042F5_D9C7_4B2F_99A3_A6A4004D081E__INCLUDED_)
