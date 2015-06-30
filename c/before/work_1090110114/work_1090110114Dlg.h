// work_1090110114Dlg.h : header file
//

#if !defined(AFX_WORK_1090110114DLG_H__206BA2EB_4FEA_486A_A776_9111989611CA__INCLUDED_)
#define AFX_WORK_1090110114DLG_H__206BA2EB_4FEA_486A_A776_9111989611CA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CWork_1090110114Dlg dialog

class CWork_1090110114Dlg : public CDialog
{
// Construction
public:
	CWork_1090110114Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CWork_1090110114Dlg)
	enum { IDD = IDD_WORK_1090110114_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWork_1090110114Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CWork_1090110114Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WORK_1090110114DLG_H__206BA2EB_4FEA_486A_A776_9111989611CA__INCLUDED_)
