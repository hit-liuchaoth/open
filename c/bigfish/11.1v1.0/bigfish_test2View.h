// bigfish_test2View.h : interface of the CBigfish_test2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_BIGFISH_TEST2VIEW_H__DC46F510_67BD_4F11_9F26_B3F929D83C9F__INCLUDED_)
#define AFX_BIGFISH_TEST2VIEW_H__DC46F510_67BD_4F11_9F26_B3F929D83C9F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "fish.h"






class CBigfish_test2View : public CView
{
protected: // create from serialization only
	CBigfish_test2View();
	DECLARE_DYNCREATE(CBigfish_test2View)

// Attributes
public:
	CBigfish_test2Doc* GetDocument();

// Operations
public:
	int m_edit1,m_edit2,m_edit3,m_edit4,m_edit5,m_edit6;
	CPoint po;
	void ToPaint();
	fish fish1;
	CPoint sc;
	int flag;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBigfish_test2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBigfish_test2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBigfish_test2View)
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in bigfish_test2View.cpp
inline CBigfish_test2Doc* CBigfish_test2View::GetDocument()
   { return (CBigfish_test2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BIGFISH_TEST2VIEW_H__DC46F510_67BD_4F11_9F26_B3F929D83C9F__INCLUDED_)
