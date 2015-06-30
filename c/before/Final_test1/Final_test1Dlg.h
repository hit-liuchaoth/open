// Final_test1Dlg.h : header file
//
//{{AFX_INCLUDES()
#include "mscomm.h"
//}}AFX_INCLUDES

#if !defined(AFX_FINAL_TEST1DLG_H__2DC2F8BF_A884_4BB8_BC22_600E29A7BC84__INCLUDED_)
#define AFX_FINAL_TEST1DLG_H__2DC2F8BF_A884_4BB8_BC22_600E29A7BC84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
bool data[16][128];					//数据
unsigned char tx[32][8];
unsigned char tempchar[2048];
unsigned int char_left;
unsigned int count;
unsigned int ret;
#define R1 2
#define D1 5
#define NUMX 16
#define NUMY 16
#define NUMA 1
#define NUMB 5 //列，即一行多少“字块”
#define CONFIGNUM 4 //配置个数，即能够储存多少条。。。怎么描述呢。。

#define BASEX 32
#define BASEY 45

/////////////////////////////////////////////////////////////////////////////
// CFinal_test1Dlg dialog

class CFinal_test1Dlg : public CDialog
{
// Construction
public:
	CFinal_test1Dlg(CWnd* pParent = NULL);	// standard constructor
	
// Dialog Data
	//{{AFX_DATA(CFinal_test1Dlg)
	enum { IDD = IDD_FINAL_TEST1_DIALOG };
	CButton	m_button6;
	CButton	m_button5;
	CButton	m_button4;
	CMSComm	m_comm;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFinal_test1Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL
	
// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CFinal_test1Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnCancel();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

HBITMAP CopyScreenToBitmap(LPRECT lpRect);

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FINAL_TEST1DLG_H__2DC2F8BF_A884_4BB8_BC22_600E29A7BC84__INCLUDED_)
