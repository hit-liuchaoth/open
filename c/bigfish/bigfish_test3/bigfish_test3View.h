// bigfish_test3View.h : interface of the CBigfish_test3View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_BIGFISH_TEST3VIEW_H__D13D9674_0028_4315_8A2A_C8DF11B3A3D7__INCLUDED_)
#define AFX_BIGFISH_TEST3VIEW_H__D13D9674_0028_4315_8A2A_C8DF11B3A3D7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


void todraw(CDC *pDC,int nID,CPoint pos,bool dir);

class CBigfish_test3View : public CView
{
protected: // create from serialization only
	CBigfish_test3View();
	DECLARE_DYNCREATE(CBigfish_test3View)

// Attributes
public:
	CBigfish_test3Doc* GetDocument();
	CPoint p1,p2;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBigfish_test3View)
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
	virtual ~CBigfish_test3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBigfish_test3View)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in bigfish_test3View.cpp
inline CBigfish_test3Doc* CBigfish_test3View::GetDocument()
   { return (CBigfish_test3Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BIGFISH_TEST3VIEW_H__D13D9674_0028_4315_8A2A_C8DF11B3A3D7__INCLUDED_)
