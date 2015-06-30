// bigfish_test2Doc.h : interface of the CBigfish_test2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_BIGFISH_TEST2DOC_H__0C37889E_4F21_4924_9E14_8C497BF87F81__INCLUDED_)
#define AFX_BIGFISH_TEST2DOC_H__0C37889E_4F21_4924_9E14_8C497BF87F81__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CBigfish_test2Doc : public CDocument
{
protected: // create from serialization only
	CBigfish_test2Doc();
	DECLARE_DYNCREATE(CBigfish_test2Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBigfish_test2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBigfish_test2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBigfish_test2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BIGFISH_TEST2DOC_H__0C37889E_4F21_4924_9E14_8C497BF87F81__INCLUDED_)
