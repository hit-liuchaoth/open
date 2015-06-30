// bigfish_test2Doc.cpp : implementation of the CBigfish_test2Doc class
//

#include "stdafx.h"
#include "bigfish_test2.h"

#include "bigfish_test2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test2Doc

IMPLEMENT_DYNCREATE(CBigfish_test2Doc, CDocument)

BEGIN_MESSAGE_MAP(CBigfish_test2Doc, CDocument)
	//{{AFX_MSG_MAP(CBigfish_test2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test2Doc construction/destruction

CBigfish_test2Doc::CBigfish_test2Doc()
{
	// TODO: add one-time construction code here

}

CBigfish_test2Doc::~CBigfish_test2Doc()
{
}

BOOL CBigfish_test2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
	this->SetTitle("¥Û”„≥‘–°”„");
	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CBigfish_test2Doc serialization

void CBigfish_test2Doc::Serialize(CArchive& ar)
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
// CBigfish_test2Doc diagnostics

#ifdef _DEBUG
void CBigfish_test2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CBigfish_test2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test2Doc commands
