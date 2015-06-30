// Match_GUIDlg.h : header file
//

#if !defined(AFX_MATCH_GUIDLG_H__FA6873EA_701A_4D86_B98D_006DC909802E__INCLUDED_)
#define AFX_MATCH_GUIDLG_H__FA6873EA_701A_4D86_B98D_006DC909802E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000




#include "MATCH_DATA.h"
#include "deletename.h"



/////////////////////////////////////////////////////////////////////////////
// CMatch_GUIDlg dialog

class CMatch_GUIDlg : public CDialog
{
// Construction
public:
	CMatch_GUIDlg(CWnd* pParent = NULL);	// standard constructor
	

	
	
	MATCH_DATA match_data;
	

// Dialog Data
	//{{AFX_DATA(CMatch_GUIDlg)
	enum { IDD = IDD_MATCH_GUI_DIALOG };
	UINT	m_id;
	CString	m_display;
	UINT	m_weight_g;
	UINT	m_hight_g;
	UINT	m_hight_w;
	UINT	m_weight_w;
	CString	m_name;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMatch_GUIDlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMatch_GUIDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton6();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MATCH_GUIDLG_H__FA6873EA_701A_4D86_B98D_006DC909802E__INCLUDED_)
