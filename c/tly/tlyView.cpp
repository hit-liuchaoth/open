// tlyView.cpp : implementation of the CTlyView class
//

#include "stdafx.h"
#include "tly.h"

#include "tlyDoc.h"
#include "tlyView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTlyView

IMPLEMENT_DYNCREATE(CTlyView, CView)

BEGIN_MESSAGE_MAP(CTlyView, CView)
	//{{AFX_MSG_MAP(CTlyView)
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
	ON_BN_CLICKED(IDB_BUTTON1,OnClickButton)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTlyView construction/destruction

CTlyView::CTlyView()
{
	// TODO: add construction code here

}

CTlyView::~CTlyView()
{
}

BOOL CTlyView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTlyView drawing

void CTlyView::OnDraw(CDC* pDC)
{
	CTlyDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CTlyView printing

BOOL CTlyView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTlyView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTlyView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CTlyView diagnostics

#ifdef _DEBUG
void CTlyView::AssertValid() const
{
	CView::AssertValid();
}

void CTlyView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTlyDoc* CTlyView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTlyDoc)));
	return (CTlyDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTlyView message handlers


void CTlyView::OnClickButton(int nID)
{
	CString str;
	str=__T("copy 1.txt c:\2.txt");
	//	str="ping 127.0.0.1";
	system("copy 1.txt 2.txt");
}

int CTlyView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	button1.Create(__T("µ„Œ“"),WS_CHILD,
					CRect(100,100,150,150),
					this,IDB_BUTTON1);
	button1.ShowWindow(SW_SHOW);
	// TODO: Add your specialized creation code here
	
	return 0;
}
