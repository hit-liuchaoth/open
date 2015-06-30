// Same_test1Doc.h : interface of the CSame_test1Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SAME_TEST1DOC_H__815B4AA2_D130_471B_95B6_1C6CAAF797CA__INCLUDED_)
#define AFX_SAME_TEST1DOC_H__815B4AA2_D130_471B_95B6_1C6CAAF797CA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSame_test1Doc : public CDocument
{
protected: // create from serialization only
	CSame_test1Doc();
	DECLARE_DYNCREATE(CSame_test1Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSame_test1Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSame_test1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSame_test1Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SAME_TEST1DOC_H__815B4AA2_D130_471B_95B6_1C6CAAF797CA__INCLUDED_)
