// Sql_testDoc.cpp : implementation of the CSql_testDoc class
//

#include "stdafx.h"
#include "Sql_test.h"

#include "Sql_testDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSql_testDoc

IMPLEMENT_DYNCREATE(CSql_testDoc, CDocument)

BEGIN_MESSAGE_MAP(CSql_testDoc, CDocument)
	//{{AFX_MSG_MAP(CSql_testDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSql_testDoc construction/destruction

CSql_testDoc::CSql_testDoc()
{
	// TODO: add one-time construction code here

}

CSql_testDoc::~CSql_testDoc()
{
}

BOOL CSql_testDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSql_testDoc serialization

void CSql_testDoc::Serialize(CArchive& ar)
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
// CSql_testDoc diagnostics

#ifdef _DEBUG
void CSql_testDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSql_testDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSql_testDoc commands
