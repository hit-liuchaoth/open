// Screenshot_test2Dlg.h : header file
//

#if !defined(AFX_SCREENSHOT_TEST2DLG_H__E078F48E_091B_4062_8F2B_3E40ED32C104__INCLUDED_)
#define AFX_SCREENSHOT_TEST2DLG_H__E078F48E_091B_4062_8F2B_3E40ED32C104__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CScreenshot_test2Dlg dialog

class CScreenshot_test2Dlg : public CDialog
{
// Construction
public:
	CScreenshot_test2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CScreenshot_test2Dlg)
	enum { IDD = IDD_SCREENSHOT_TEST2_DIALOG };
	CEdit	m_data_7;
	UINT	m_pos_x;
	UINT	m_pos_y;
	CString	m_data;
	UINT	m_data2;
	UINT	m_data_5;
	UINT	m_data_6;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CScreenshot_test2Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CScreenshot_test2Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnButton1();
	afx_msg void OnChangeEdit1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
HBITMAP CopyScreenToBitmap(LPRECT lpRect);

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCREENSHOT_TEST2DLG_H__E078F48E_091B_4062_8F2B_3E40ED32C104__INCLUDED_)

