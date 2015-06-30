// CAD_5_23Dlg.h : header file
//

#if !defined(AFX_CAD_5_23DLG_H__E3592EFE_F10E_4B56_A83B_8AC7529B08BA__INCLUDED_)
#define AFX_CAD_5_23DLG_H__E3592EFE_F10E_4B56_A83B_8AC7529B08BA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCAD_5_23Dlg dialog
#define M 1.0e21
#define NI 1.5e10
#define THT 38.6
#define Q 1.6e-19
#define EBXL 1.064e-12
#define N 500
#define H 0.0000002
#include "math.h"
#include "stdio.h"


 	



 




class CCAD_5_23Dlg : public CDialog
{
// Construction
public:
	CCAD_5_23Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCAD_5_23Dlg)
	enum { IDD = IDD_CAD_5_23_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCAD_5_23Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	
	// Generated message map functions
	//{{AFX_MSG(CCAD_5_23Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
void zhuigan(double *out,double *in1,double *in2,int n);
void do_fine0(double *in,int n);
void do_b(double *out,double *in,int n);
void do_j(double *out,double *in,int n);
void exchange(double *out,double *in,int n);
int check(double *in,int n);


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CAD_5_23DLG_H__E3592EFE_F10E_4B56_A83B_8AC7529B08BA__INCLUDED_)
