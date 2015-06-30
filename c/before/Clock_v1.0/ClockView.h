// ClockView.h : interface of the CClockView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CLOCKVIEW_H__CF99406E_D95E_419C_A11F_A51AB9091F21__INCLUDED_)
#define AFX_CLOCKVIEW_H__CF99406E_D95E_419C_A11F_A51AB9091F21__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define IDC_BUTTON1 1000

class CClockView : public CView
{
protected: // create from serialization only
	CClockView();
	DECLARE_DYNCREATE(CClockView)
	afx_msg void Once();
// Attributes
public:
	CClockDoc* GetDocument();
	
	void ToPaint();
	
	CButton button;
	int hour,minute,second,flag;
	int count;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CClockView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CClockView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CClockView)
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ClockView.cpp
inline CClockDoc* CClockView::GetDocument()
   { return (CClockDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLOCKVIEW_H__CF99406E_D95E_419C_A11F_A51AB9091F21__INCLUDED_)
