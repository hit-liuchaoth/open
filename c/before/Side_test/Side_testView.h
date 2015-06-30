// Side_testView.h : interface of the CSide_testView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SIDE_TESTVIEW_H__0B753DAB_589D_4B0B_B0C2_06C6D342F23B__INCLUDED_)
#define AFX_SIDE_TESTVIEW_H__0B753DAB_589D_4B0B_B0C2_06C6D342F23B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSide_testView : public CView
{
protected: // create from serialization only
	CSide_testView();
	DECLARE_DYNCREATE(CSide_testView)

// Attributes
public:
	CSide_testDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSide_testView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSide_testView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSide_testView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Side_testView.cpp
inline CSide_testDoc* CSide_testView::GetDocument()
   { return (CSide_testDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SIDE_TESTVIEW_H__0B753DAB_589D_4B0B_B0C2_06C6D342F23B__INCLUDED_)
