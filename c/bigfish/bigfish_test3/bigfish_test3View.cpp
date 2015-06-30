// bigfish_test3View.cpp : implementation of the CBigfish_test3View class
//

#include "stdafx.h"
#include "bigfish_test3.h"

#include "bigfish_test3Doc.h"
#include "bigfish_test3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test3View

IMPLEMENT_DYNCREATE(CBigfish_test3View, CView)

BEGIN_MESSAGE_MAP(CBigfish_test3View, CView)
	//{{AFX_MSG_MAP(CBigfish_test3View)
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test3View construction/destruction

CBigfish_test3View::CBigfish_test3View()
{
	// TODO: add construction code here

}

CBigfish_test3View::~CBigfish_test3View()
{
}

BOOL CBigfish_test3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test3View drawing

void CBigfish_test3View::OnDraw(CDC* pDC)
{
	CBigfish_test3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	todraw(pDC,IDB_BITMAP2,p1,1);
	todraw(pDC,IDB_BITMAP1,p2,0);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test3View printing

BOOL CBigfish_test3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CBigfish_test3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CBigfish_test3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test3View diagnostics

#ifdef _DEBUG
void CBigfish_test3View::AssertValid() const
{
	CView::AssertValid();
}

void CBigfish_test3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBigfish_test3Doc* CBigfish_test3View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBigfish_test3Doc)));
	return (CBigfish_test3Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test3View message handlers
void todraw(CDC *pDC,int nID,CPoint pos,bool dir)
{
	CDC temp1,mask_dc;
	CBitmap bit,mask_bit;
	BITMAP bit_info;
	bit.LoadBitmap(nID);
	bit.GetBitmap(&bit_info);
	temp1.CreateCompatibleDC(pDC);
	mask_dc.CreateCompatibleDC(pDC);
	mask_bit.CreateBitmap(bit_info.bmWidth,bit_info.bmHeight,1,1,NULL);
	CBitmap *pOld1=mask_dc.SelectObject(&mask_bit);
	CBitmap *pOld=temp1.SelectObject(&bit);
	COLORREF l_crOldBack=temp1.SetBkColor(RGB(255,255,255));
	if(dir)
	{
		mask_dc.BitBlt(0,0,bit_info.bmWidth,bit_info.bmHeight,&temp1,0,0,SRCCOPY);
		pDC->BitBlt(pos.x,pos.y,bit_info.bmWidth,bit_info.bmHeight,&temp1,0,0,SRCINVERT);
		pDC->BitBlt(pos.x,pos.y,bit_info.bmWidth,bit_info.bmHeight,&mask_dc,0,0,SRCAND);
		pDC->BitBlt(pos.x,pos.y,bit_info.bmWidth,bit_info.bmHeight,&temp1,0,0,SRCINVERT);
	}
	else
	{
		mask_dc.StretchBlt(0,0,bit_info.bmWidth,bit_info.bmHeight,&temp1,bit_info.bmWidth-1,0,-bit_info.bmWidth,bit_info.bmHeight,SRCCOPY);
		pDC->StretchBlt(pos.x,pos.y,bit_info.bmWidth,bit_info.bmHeight,&temp1,bit_info.bmWidth-1,0,-bit_info.bmWidth,bit_info.bmHeight,SRCINVERT);
		pDC->BitBlt(pos.x,pos.y,bit_info.bmWidth,bit_info.bmHeight,&mask_dc,0,0,SRCAND);
		pDC->StretchBlt(pos.x,pos.y,bit_info.bmWidth,bit_info.bmHeight,&temp1,bit_info.bmWidth-1,0,-bit_info.bmWidth,bit_info.bmHeight,SRCINVERT);
	}
	temp1.SelectObject(pOld);
	bit.DeleteObject();
	mask_bit.DeleteObject();
	temp1.DeleteDC();
	mask_dc.DeleteDC();

}

int CBigfish_test3View::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	p1.x=10;
	p1.y=10;
	p2.x=40;
	p2.y=40;
	// TODO: Add your specialized creation code here
	
	return 0;
}
