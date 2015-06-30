// ClockView.cpp : implementation of the CClockView class
//

#include "stdafx.h"
#include "Clock.h"
#include "math.h"

#include "ClockDoc.h"
#include "ClockView.h"

#define POSX 20
#define POSY 20

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CClockView

IMPLEMENT_DYNCREATE(CClockView, CView)

BEGIN_MESSAGE_MAP(CClockView, CView)
	//{{AFX_MSG_MAP(CClockView)
	ON_WM_TIMER()
	ON_WM_CREATE()
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1,Once)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CClockView construction/destruction

CClockView::CClockView()
{
	// TODO: add construction code here
}

CClockView::~CClockView()
{
}

BOOL CClockView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs
	CTime timer;
	timer=CTime::GetCurrentTime();
	minute=timer.GetMinute();
	second=timer.GetSecond();
	hour=timer.GetHour();
	count=0;
	
	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CClockView drawing

void CClockView::OnDraw(CDC* pDC)
{
	CClockDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CClockView diagnostics

#ifdef _DEBUG
void CClockView::AssertValid() const
{
	CView::AssertValid();
}

void CClockView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CClockDoc* CClockView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CClockDoc)));
	return (CClockDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CClockView message handlers

void CClockView::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	switch(nIDEvent)
	{
	case 1:


			
			
			if(second==59)
			{
				second=0;
				if(minute==59)
				{
					minute=0;
					if(hour==11)
					{
						hour=0;
					}
					else
						hour++;
				}
				else
					minute++;
			}
			else
				second++;

		ToPaint();										
		break;
	default:
		break;
	}
	UpdateWindow();
	CView::OnTimer(nIDEvent);
}

void CClockView::ToPaint()
{
	CString str;
	CClientDC dc(this);
	int i;
//	dc.LineTo(100+100*sin((double)second*3.14*2/60),100-100*cos((double)second*3.14*2/60));
	dc.Ellipse(POSX-3,POSY-3,POSX+200+3,POSY+200+3);
	dc.Ellipse(POSX-2,POSY-2,POSX+200+2,POSY+200+2);
	dc.Ellipse(POSX-1,POSY-1,POSX+200+1,POSY+200+1);
	dc.Ellipse(POSX+0,POSY+0,POSX+200,POSY+200);
	for(i=0;i<12;i++)
	{
		dc.MoveTo(POSX+100+90*sin((double)i*3.14*2/12),POSY+100-90*cos((double)i*3.14*2/12));
		dc.LineTo(POSX+100+100*sin((double)i*3.14*2/12),POSY+100-100*cos((double)i*3.14*2/12));
	}
	for(i=0;i<4;i++)
	{
		dc.Ellipse(POSX+95+i,POSY+95+i,POSX+105-i,POSY+105-i);
	}
	for(i=0;i<60;i++)
	{
		dc.MoveTo(POSX+100+97*sin((double)i*3.14*2/60),POSY+100-97*cos((double)i*3.14*2/60));
		dc.LineTo(POSX+100+100*sin((double)i*3.14*2/60),POSY+100-100*cos((double)i*3.14*2/60));
	}
	dc.MoveTo(POSX+100-2*cos((double)second*3.14*2/60),POSY+100-2*sin((double)second*3.14*2/60));
	dc.LineTo(POSX+100+100*sin((double)second*3.14*2/60),POSY+100-100*cos((double)second*3.14*2/60));
	dc.LineTo(POSX+100+2*cos((double)second*3.14*2/60),POSY+100+2*sin((double)second*3.14*2/60));

	dc.MoveTo(POSX+100-3*cos((double)minute*3.14*2/60),POSY+100-3*sin((double)minute*3.14*2/60));
	dc.LineTo(POSX+100+80*sin((double)minute*3.14*2/60),POSY+100-80*cos((double)minute*3.14*2/60));
	dc.LineTo(POSX+100+3*cos((double)minute*3.14*2/60),POSY+100+3*sin((double)minute*3.14*2/60));

	dc.MoveTo(POSX+100-4*cos((double)hour*3.14*2/12+(double)minute*3.14*2/60/12),POSY+100-4*sin((double)hour*3.14*2/12+(double)minute*3.14*2/60/12));
	dc.LineTo(POSX+100+50*sin((double)hour*3.14*2/12+(double)minute*3.14*2/60/12),POSY+100-50*cos((double)hour*3.14*2/12+(double)minute*3.14*2/60/12));
	dc.LineTo(POSX+100+4*cos((double)hour*3.14*2/12+(double)minute*3.14*2/60/12),POSY+100+4*sin((double)hour*3.14*2/12+(double)minute*3.14*2/60/12));
			hou[0]=hour/10;
		hou[1]=hour%10;
		min[0]=minute/10;
		min[1]=minute%10;
		sec[0]=second/10;
		sec[1]=second%10;

	str.Format(__T(" %d%d:%d%d:%d%d"),hou[0],hou[1],min[0],min[1],sec[0],sec[1]);
	dc.TextOut(POSX+250,30,str);
		UpdateWindow();
}

void CClockView::Once()
{
	
}

int CClockView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	ToPaint();
	SetTimer(1,1000,NULL);
	

	return 0;
}

void CClockView::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	CString str;
	int i;
	// TODO: Add your message handler code here
	dc.Ellipse(POSX-3,POSY-3,POSX+200+3,POSY+200+3);
	dc.Ellipse(POSX-2,POSY-2,POSX+200+2,POSY+200+2);
	dc.Ellipse(POSX-1,POSY-1,POSX+200+1,POSY+200+1);
	dc.Ellipse(POSX+0,POSY+0,POSX+200,POSY+200);
	

	for(i=0;i<5;i++)
	{
		dc.Ellipse(POSX+95+i,POSY+95+i,POSX+105-i,POSY+105-i);
	}
	for(i=0;i<12;i++)
	{
		dc.MoveTo(POSX+100+90*sin((double)i*3.14*2/12),POSY+100-90*cos((double)i*3.14*2/12));
		dc.LineTo(POSX+100+100*sin((double)i*3.14*2/12),POSY+100-100*cos((double)i*3.14*2/12));
	}
	for(i=0;i<60;i++)
	{
		dc.MoveTo(POSX+100+97*sin((double)i*3.14*2/60),POSY+100-97*cos((double)i*3.14*2/60));
		dc.LineTo(POSX+100+100*sin((double)i*3.14*2/60),POSY+100-100*cos((double)i*3.14*2/60));
	}
	dc.MoveTo(POSX+100-2*cos((double)second*3.14*2/60),POSY+100-2*sin((double)second*3.14*2/60));
	dc.LineTo(POSX+100+100*sin((double)second*3.14*2/60),POSY+100-100*cos((double)second*3.14*2/60));
	dc.LineTo(POSX+100+2*cos((double)second*3.14*2/60),POSY+100+2*sin((double)second*3.14*2/60));

	dc.MoveTo(POSX+100-3*cos((double)minute*3.14*2/60),POSY+100-3*sin((double)minute*3.14*2/60));
	dc.LineTo(POSX+100+80*sin((double)minute*3.14*2/60),POSY+100-80*cos((double)minute*3.14*2/60));
	dc.LineTo(POSX+100+3*cos((double)minute*3.14*2/60),POSY+100+3*sin((double)minute*3.14*2/60));

	
	dc.MoveTo(POSX+100-4*cos((double)hour*3.14*2/12+(double)minute*3.14*2/60/12),POSY+100-4*sin((double)hour*3.14*2/12+(double)minute*3.14*2/60/12));
	dc.LineTo(POSX+100+50*sin((double)hour*3.14*2/12+(double)minute*3.14*2/60/12),POSY+100-50*cos((double)hour*3.14*2/12+(double)minute*3.14*2/60/12));
	dc.LineTo(POSX+100+4*cos((double)hour*3.14*2/12+(double)minute*3.14*2/60/12),POSY+100+4*sin((double)hour*3.14*2/12+(double)minute*3.14*2/60/12));
	

		hou[0]=hour/10;
		hou[1]=hour%10;
		min[0]=minute/10;
		min[1]=minute%10;
		sec[0]=second/10;
		sec[1]=second%10;

	str.Format(__T(" %d%d:%d%d:%d%d"),hou[0],hou[1],min[0],min[1],sec[0],sec[1]);

	dc.TextOut(POSX+250,30,str);
	UpdateWindow();
	// Do not call CView::OnPaint() for painting messages
}
