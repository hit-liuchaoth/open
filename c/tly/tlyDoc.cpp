// tlyDoc.cpp : implementation of the CTlyDoc class
//

#include "stdafx.h"
#include "tly.h"

#include "tlyDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTlyDoc

IMPLEMENT_DYNCREATE(CTlyDoc, CDocument)

BEGIN_MESSAGE_MAP(CTlyDoc, CDocument)
	//{{AFX_MSG_MAP(CTlyDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTlyDoc construction/destruction

CTlyDoc::CTlyDoc()
{
	// TODO: add one-time construction code here

}

CTlyDoc::~CTlyDoc()
{
}

BOOL CTlyDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTlyDoc serialization

void CTlyDoc::Serialize(CArchive& ar)
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
// CTlyDoc diagnostics

#ifdef _DEBUG
void CTlyDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTlyDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTlyDoc commands
