// bigfish_test1Dlg.h : header file
//

#if !defined(AFX_BIGFISH_TEST1DLG_H__E2CA3D9E_FC4E_4141_9F96_66D7CB10D002__INCLUDED_)
#define AFX_BIGFISH_TEST1DLG_H__E2CA3D9E_FC4E_4141_9F96_66D7CB10D002__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000






#define TIME 500







/////////////////////////////////////////////////////////////////////////////
// CBigfish_test1Dlg dialog

class CBigfish_test1Dlg : public CDialog
{
// Construction
public:
	CBigfish_test1Dlg(CWnd* pParent = NULL);	// standard constructor
		
	CPoint po;
	void ToPaint();


// Dialog Data
	//{{AFX_DATA(CBigfish_test1Dlg)
	enum { IDD = IDD_BIGFISH_TEST1_DIALOG };
	int		m_edit1;
	UINT	m_edit2;
	int		m_edit3;
	int		m_edit4;
	int		m_edit5;
	int		m_edit6;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBigfish_test1Dlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CBigfish_test1Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BIGFISH_TEST1DLG_H__E2CA3D9E_FC4E_4141_9F96_66D7CB10D002__INCLUDED_)
