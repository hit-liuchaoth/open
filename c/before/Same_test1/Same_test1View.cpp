// Same_test1View.cpp : implementation of the CSame_test1View class
//

#include "stdafx.h"
#include "Same_test1.h"

#include "Same_test1Doc.h"
#include "Same_test1View.h"

#include "def.h"
#include <time.h>
#include <string.h>
#include<iostream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


/////////////////////////////////////////////////////////////////////////////
// CSame_test1View

IMPLEMENT_DYNCREATE(CSame_test1View, CView)

BEGIN_MESSAGE_MAP(CSame_test1View, CView)
	//{{AFX_MSG_MAP(CSame_test1View)
	ON_WM_CREATE()
	ON_CONTROL_RANGE(BN_CLICKED,ID_BUTTON0,ID_BUTTON79,OnButtonClicked)
	//}}AFX_MSG_MAP
	
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSame_test1View construction/destruction

CSame_test1View::CSame_test1View()
{
	// TODO: add construction code here

}

CSame_test1View::~CSame_test1View()
{
}

BOOL CSame_test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSame_test1View drawing

void CSame_test1View::OnDraw(CDC* pDC)
{
	CSame_test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CSame_test1View diagnostics

#ifdef _DEBUG
void CSame_test1View::AssertValid() const
{
	CView::AssertValid();
}

void CSame_test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSame_test1Doc* CSame_test1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSame_test1Doc)));
	return (CSame_test1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSame_test1View message handlers

int CSame_test1View::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	int x,i,j=0;
	int k,flag;
	HICON hIcon1;
	/////////////////////////init
	for(i=0;i<MOUNT_H;i++)
	{
		for(j=0;j<MOUNT_W;j++)
		{
			is[i][j]=-1;
		}
	}
	statu=0;
	/////////////////////////init end
	//////////////rand general
	flag=1;
	srand(time(NULL));
	for(k=0;k<80;k++)
	{
		while(flag)
		{
			i=rand()%(MOUNT_H);
			j=rand()%(MOUNT_W);
			if(is[i][j]==-1)
			{
				is[i][j]=k;
				flag=0;
				data[k].x=i;
				data[k].y=j;
			}
		}
		flag=1;
	}
	///////////////////////////rand end
	///////////////////////////draw
	for(x=0;x<MOUNT_H;x++)
	{
		for(j=0;j<MOUNT_W;j++)
		{
			if(is[x][j]!=-1)
			{
				k=is[x][j];
				if(k<40)
				{
				hIcon1=AfxGetApp()->LoadIcon(IDI_ICON1+k);
				
				m_button[k].Create(_T(""),WS_CHILD|BS_ICON,
											CRect(x*WIDTH,j*HIGHT,WIDTH+x*WIDTH,HIGHT+j*HIGHT),
											this,ID_BUTTON(k));
				m_button[k].SetIcon(hIcon1);
				m_button[k].ShowWindow(SW_SHOW);
				}
				else
				{
					hIcon1=AfxGetApp()->LoadIcon(IDI_ICON1+k-40);
				
					m_button[k].Create(_T(""),WS_CHILD|BS_ICON,
											CRect(x*WIDTH,j*HIGHT,WIDTH+x*WIDTH,HIGHT+j*HIGHT),
											this,ID_BUTTON(k));
					m_button[k].SetIcon(hIcon1);
					m_button[k].ShowWindow(SW_SHOW);
				}
			}
		}
	}
	///////////////////////////draw end
	return 0;
}

int CSame_test1View::OnButtonClicked(UINT nID)
{
	CClientDC   dc(this);
	int x=nID-10000;
	
	CPen   m_pen(PS_SOLID     ,2,RGB(255,0,10));
	dc.SelectStockObject(NULL_BRUSH); 
	dc.SelectObject(&m_pen);

	if(statu==0)
	{
		dc.Rectangle((data[x].x)*34+2,(data[x].y)*34+2,(data[x].x)*34+32,(data[x].y)*34+32);
		temp=nID;
		statu=1;
	}
	else
	{

		if(nID==temp+40)
		{
			m_button[nID-10000].ShowWindow(SW_HIDE);
			m_button[nID-10000-40].ShowWindow(SW_HIDE);
			statu=0;
		}
		else if(nID==temp-40)
		{
			m_button[nID-10000].ShowWindow(SW_HIDE);
			m_button[nID-10000+40].ShowWindow(SW_HIDE);
			statu=0;
		}
		else
		{
		dc.Rectangle((data[x].x)*34+2,(data[x].y)*34+2,(data[x].x)*34+32,(data[x].y)*34+32);
		temp=nID;
		}
	}
	return 0;
}
