// bigfish_test3Doc.cpp : implementation of the CBigfish_test3Doc class
//

#include "stdafx.h"
#include "bigfish_test3.h"

#include "bigfish_test3Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test3Doc

IMPLEMENT_DYNCREATE(CBigfish_test3Doc, CDocument)

BEGIN_MESSAGE_MAP(CBigfish_test3Doc, CDocument)
	//{{AFX_MSG_MAP(CBigfish_test3Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test3Doc construction/destruction

CBigfish_test3Doc::CBigfish_test3Doc()
{
	// TODO: add one-time construction code here

}

CBigfish_test3Doc::~CBigfish_test3Doc()
{
}

BOOL CBigfish_test3Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CBigfish_test3Doc serialization

void CBigfish_test3Doc::Serialize(CArchive& ar)
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
// CBigfish_test3Doc diagnostics

#ifdef _DEBUG
void CBigfish_test3Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CBigfish_test3Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test3Doc commands
