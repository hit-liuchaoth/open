// 2D_codeDlg.h : header file
//

#if !defined(AFX_2D_CODEDLG_H__66A4A7F8_7269_46F1_8261_F597FEB0FD6E__INCLUDED_)
#define AFX_2D_CODEDLG_H__66A4A7F8_7269_46F1_8261_F597FEB0FD6E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMy2D_codeDlg dialog
HBITMAP CopyScreenToBitmap(LPRECT lpRect);

class CMy2D_codeDlg : public CDialog
{
// Construction
public:
	CBitmap ScrBmp;
	void code1(char *p , int m);
	CMy2D_codeDlg(CWnd* pParent = NULL);	// standard constructor
	char data[20];
	char code[20];
	int pix[48][48];
	
// Dialog Data
	//{{AFX_DATA(CMy2D_codeDlg)
	enum { IDD = IDD_MY2D_CODE_DIALOG };
	CEdit	m_edit4;
	CEdit	m_edit3;
	CEdit	m_edit1;
	UINT	m_edit2;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy2D_codeDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMy2D_codeDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnChangeEdit2();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_2D_CODEDLG_H__66A4A7F8_7269_46F1_8261_F597FEB0FD6E__INCLUDED_)
