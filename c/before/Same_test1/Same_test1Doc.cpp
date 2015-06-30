// Same_test1Doc.cpp : implementation of the CSame_test1Doc class
//

#include "stdafx.h"
#include "Same_test1.h"

#include "Same_test1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSame_test1Doc

IMPLEMENT_DYNCREATE(CSame_test1Doc, CDocument)

BEGIN_MESSAGE_MAP(CSame_test1Doc, CDocument)
	//{{AFX_MSG_MAP(CSame_test1Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSame_test1Doc construction/destruction

CSame_test1Doc::CSame_test1Doc()
{
	// TODO: add one-time construction code here

}

CSame_test1Doc::~CSame_test1Doc()
{
}

BOOL CSame_test1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
	this->SetTitle("Á¬Á¬¿´");
	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSame_test1Doc serialization

void CSame_test1Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CSame_test1Doc diagnostics

#ifdef _DEBUG
void CSame_test1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSame_test1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSame_test1Doc commands
