// tlyView.h : interface of the CTlyView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TLYVIEW_H__C2789BB4_34F2_4389_AF4A_359047D59948__INCLUDED_)
#define AFX_TLYVIEW_H__C2789BB4_34F2_4389_AF4A_359047D59948__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000




class CTlyView : public CView
{
protected: // create from serialization only
	CTlyView();
	DECLARE_DYNCREATE(CTlyView)

// Attributes
public:
	CTlyDoc* GetDocument();
	


	CButton button1;
protected:
	afx_msg void OnClickButton(int nID);

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTlyView)
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
	virtual ~CTlyView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTlyView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in tlyView.cpp
inline CTlyDoc* CTlyView::GetDocument()
   { return (CTlyDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TLYVIEW_H__C2789BB4_34F2_4389_AF4A_359047D59948__INCLUDED_)
