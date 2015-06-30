// Serial_test1Dlg.h : header file
//
#include "mscomm.h"
#if !defined(AFX_SERIAL_TEST1DLG_H__4F9853EF_51C8_42B8_AF42_DE1518921B4D__INCLUDED_)
#define AFX_SERIAL_TEST1DLG_H__4F9853EF_51C8_42B8_AF42_DE1518921B4D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CSerial_test1Dlg dialog

class CSerial_test1Dlg : public CDialog
{
// Construction
public:
	CSerial_test1Dlg(CWnd* pParent = NULL);	// standard constructor
	CMSComm Cmscomm;
// Dialog Data
	//{{AFX_DATA(CSerial_test1Dlg)
	enum { IDD = IDD_SERIAL_TEST1_DIALOG };
	UINT	m_data_2;
	CString	m_data_1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSerial_test1Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL
// Implementation
protected:
	HICON m_hIcon;
	
	// Generated message map functions
	//{{AFX_MSG(CSerial_test1Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnOnCommMscomm1();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIAL_TEST1DLG_H__4F9853EF_51C8_42B8_AF42_DE1518921B4D__INCLUDED_)
