// screenshotDlg.h : header file
//

#if !defined(AFX_SCREENSHOTDLG_H__84C608BE_9F2B_4004_A061_A87C7978146B__INCLUDED_)
#define AFX_SCREENSHOTDLG_H__84C608BE_9F2B_4004_A061_A87C7978146B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CScreenshotDlg dialog

class CScreenshotDlg : public CDialog
{
// Construction
public:
	CScreenshotDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CScreenshotDlg)
	enum { IDD = IDD_SCREENSHOT_DIALOG };
	UINT	m_px1;
	UINT	m_py1;
	UINT	m_px2;
	UINT	m_py2;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CScreenshotDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL
	short down_flag;
	CPoint down_pos;
	CPoint up_pos;
	LPRECT area;
// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CScreenshotDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnFuntion_on();
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnButton3();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

HBITMAP CopyScreenToBitmap(LPRECT lpRect);

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCREENSHOTDLG_H__84C608BE_9F2B_4004_A061_A87C7978146B__INCLUDED_)
