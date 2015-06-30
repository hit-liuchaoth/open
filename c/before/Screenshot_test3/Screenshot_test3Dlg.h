// Screenshot_test3Dlg.h : header file
//

#if !defined(AFX_SCREENSHOT_TEST3DLG_H__7870F603_FB63_4F08_8E97_CFA4C1BE726C__INCLUDED_)
#define AFX_SCREENSHOT_TEST3DLG_H__7870F603_FB63_4F08_8E97_CFA4C1BE726C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CScreenshot_test3Dlg dialog

class CScreenshot_test3Dlg : public CDialog
{
// Construction
public:
	CScreenshot_test3Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CScreenshot_test3Dlg)
	enum { IDD = IDD_SCREENSHOT_TEST3_DIALOG };
	CEdit	m_data_4;
	UINT	m_data_1;
	UINT	m_data_2;
	UINT	m_data_3;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CScreenshot_test3Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CScreenshot_test3Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCREENSHOT_TEST3DLG_H__7870F603_FB63_4F08_8E97_CFA4C1BE726C__INCLUDED_)
