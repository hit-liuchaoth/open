// Same_test1View.h : interface of the CSame_test1View class
//
/////////////////////////////////////////////////////////////////////////////
#include "def.h"
#include "data.h"

#if !defined(AFX_SAME_TEST1VIEW_H__F8364965_B2AC_405B_A37F_DDF7BC8A4108__INCLUDED_)
#define AFX_SAME_TEST1VIEW_H__F8364965_B2AC_405B_A37F_DDF7BC8A4108__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSame_test1View : public CView
{
protected: // create from serialization only
	CSame_test1View();
	DECLARE_DYNCREATE(CSame_test1View)
// Attributes
public:
	CSame_test1Doc* GetDocument();
	CButton m_button[MOUNT_PAIR*2];
	int is[MOUNT_H][MOUNT_W];
	int statu;
	int temp;
	data data[MOUNT_PAIR*2];
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSame_test1View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSame_test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSame_test1View)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg int OnButtonClicked(UINT nID);
	//}}AFX_MSG
	
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Same_test1View.cpp
inline CSame_test1Doc* CSame_test1View::GetDocument()
   { return (CSame_test1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SAME_TEST1VIEW_H__F8364965_B2AC_405B_A37F_DDF7BC8A4108__INCLUDED_)
