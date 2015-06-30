// tlyDoc.h : interface of the CTlyDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TLYDOC_H__6A988A7F_A463_4522_A23C_0C2ABC027F75__INCLUDED_)
#define AFX_TLYDOC_H__6A988A7F_A463_4522_A23C_0C2ABC027F75__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTlyDoc : public CDocument
{
protected: // create from serialization only
	CTlyDoc();
	DECLARE_DYNCREATE(CTlyDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTlyDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTlyDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTlyDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TLYDOC_H__6A988A7F_A463_4522_A23C_0C2ABC027F75__INCLUDED_)
