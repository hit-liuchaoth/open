// Side_testView.cpp : implementation of the CSide_testView class
//

#include "stdafx.h"
#include "Side_test.h"

#include "Side_testDoc.h"
#include "Side_testView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSide_testView

IMPLEMENT_DYNCREATE(CSide_testView, CView)

BEGIN_MESSAGE_MAP(CSide_testView, CView)
	//{{AFX_MSG_MAP(CSide_testView)
	ON_WM_CREATE()
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSide_testView construction/destruction

CSide_testView::CSide_testView()
{
	// TODO: add construction code here

}

CSide_testView::~CSide_testView()
{
}

BOOL CSide_testView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSide_testView drawing

void CSide_testView::OnDraw(CDC* pDC)
{
	CSide_testDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	
}

/////////////////////////////////////////////////////////////////////////////
// CSide_testView diagnostics

#ifdef _DEBUG
void CSide_testView::AssertValid() const
{
	CView::AssertValid();
}

void CSide_testView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSide_testDoc* CSide_testView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSide_testDoc)));
	return (CSide_testDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSide_testView message handlers

int CSide_testView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	CClientDC dc(this);
	dc.Rectangle(0,0,10,10);
	return 0;
}

BOOL CSide_testView::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext) 
{
	// TODO: Add your specialized code here and/or call the base class

	return CWnd::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
}

void CSide_testView::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here
	dc.Rectangle(1,1,200,200);
	// Do not call CView::OnPaint() for painting messages
}
