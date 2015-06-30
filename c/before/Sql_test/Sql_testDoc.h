// Sql_testDoc.h : interface of the CSql_testDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SQL_TESTDOC_H__67E601B4_3EC4_4A4D_855F_CFACC9E1ABC6__INCLUDED_)
#define AFX_SQL_TESTDOC_H__67E601B4_3EC4_4A4D_855F_CFACC9E1ABC6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSql_testDoc : public CDocument
{
protected: // create from serialization only
	CSql_testDoc();
	DECLARE_DYNCREATE(CSql_testDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSql_testDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSql_testDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSql_testDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SQL_TESTDOC_H__67E601B4_3EC4_4A4D_855F_CFACC9E1ABC6__INCLUDED_)
