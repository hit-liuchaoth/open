// Sql_testView.h : interface of the CSql_testView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SQL_TESTVIEW_H__116D78FC_BD20_41E2_A6D9_B5146A3CC702__INCLUDED_)
#define AFX_SQL_TESTVIEW_H__116D78FC_BD20_41E2_A6D9_B5146A3CC702__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <winsock.h>
#include <mysql.h>

#define ID_BUTTON1 10000
#define ID_EDIT1 10001
#define ID_EDIT2 10002


class CSql_testView : public CView
{
protected: // create from serialization only
	CSql_testView();
	DECLARE_DYNCREATE(CSql_testView)

// Attributes
public:
	CSql_testDoc* GetDocument();
	
	MYSQL *mysql;
	CButton m_b1;
	CEdit m_edit1;
	CEdit m_edit2;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSql_testView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSql_testView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	afx_msg void OnB1(int nID);
// Generated message map functions
protected:
	//{{AFX_MSG(CSql_testView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Sql_testView.cpp
inline CSql_testDoc* CSql_testView::GetDocument()
   { return (CSql_testDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SQL_TESTVIEW_H__116D78FC_BD20_41E2_A6D9_B5146A3CC702__INCLUDED_)
