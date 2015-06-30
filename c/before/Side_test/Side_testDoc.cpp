// Side_testDoc.cpp : implementation of the CSide_testDoc class
//

#include "stdafx.h"
#include "Side_test.h"

#include "Side_testDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSide_testDoc

IMPLEMENT_DYNCREATE(CSide_testDoc, CDocument)

BEGIN_MESSAGE_MAP(CSide_testDoc, CDocument)
	//{{AFX_MSG_MAP(CSide_testDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSide_testDoc construction/destruction

CSide_testDoc::CSide_testDoc()
{
	// TODO: add one-time construction code here

}

CSide_testDoc::~CSide_testDoc()
{
}

BOOL CSide_testDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSide_testDoc serialization

void CSide_testDoc::Serialize(CArchive& ar)
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
// CSide_testDoc diagnostics

#ifdef _DEBUG
void CSide_testDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSide_testDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSide_testDoc commands
