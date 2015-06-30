// Side_testDoc.h : interface of the CSide_testDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SIDE_TESTDOC_H__60740E26_F03F_4E52_8D6D_DE9051A982B7__INCLUDED_)
#define AFX_SIDE_TESTDOC_H__60740E26_F03F_4E52_8D6D_DE9051A982B7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSide_testDoc : public CDocument
{
protected: // create from serialization only
	CSide_testDoc();
	DECLARE_DYNCREATE(CSide_testDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSide_testDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSide_testDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSide_testDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SIDE_TESTDOC_H__60740E26_F03F_4E52_8D6D_DE9051A982B7__INCLUDED_)
