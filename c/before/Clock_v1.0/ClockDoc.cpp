// ClockDoc.cpp : implementation of the CClockDoc class
//

#include "stdafx.h"
#include "Clock.h"

#include "ClockDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CClockDoc

IMPLEMENT_DYNCREATE(CClockDoc, CDocument)

BEGIN_MESSAGE_MAP(CClockDoc, CDocument)
	//{{AFX_MSG_MAP(CClockDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CClockDoc construction/destruction

CClockDoc::CClockDoc()
{
	// TODO: add one-time construction code here

}

CClockDoc::~CClockDoc()
{
}

BOOL CClockDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
	this->SetTitle("Ê±ÖÓÄ£ÐÍ");
	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CClockDoc serialization

void CClockDoc::Serialize(CArchive& ar)
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
// CClockDoc diagnostics

#ifdef _DEBUG
void CClockDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CClockDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CClockDoc commands
