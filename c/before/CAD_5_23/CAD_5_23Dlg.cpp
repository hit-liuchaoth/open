// CAD_5_23Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CAD_5_23.h"
#include "CAD_5_23Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCAD_5_23Dlg dialog

CCAD_5_23Dlg::CCAD_5_23Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCAD_5_23Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCAD_5_23Dlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCAD_5_23Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCAD_5_23Dlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CCAD_5_23Dlg, CDialog)
	//{{AFX_MSG_MAP(CCAD_5_23Dlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCAD_5_23Dlg message handlers

BOOL CCAD_5_23Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCAD_5_23Dlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCAD_5_23Dlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CCAD_5_23Dlg::OnButton1() 
{
	
	

		

	

}

void CCAD_5_23Dlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	double fine0[N+2];
	double fine[N+2]={0};
	double b[N+1];
	double j[N+1];
	int flag=0;
	int i;
	CWnd * x=(CWnd *) GetDlgItem(IDC_STATIC);
	CDC * pDC1 =x->GetDC() ;
	
	CBrush brush_1(RGB(255,255,255));
	CBrush brush_2(RGB(0,0,0));
	CRect rect(0,0,700,500);
	do_fine0(fine0,N);
	 while(!flag)
	 {
	 do_b(b,fine0,N);
	 do_j(j,fine0,N);
	 zhuigan(fine,b,j,N-1);
	 flag=check(fine,N);
//	 printf("%d",flag);
	 exchange(fine0,fine,N-1);
	 }
for(i=0;i<500;i++)
				{
				fine0[i]=(int)(fine0[i]*500);
			
				}
	 	pDC1->Rectangle(rect);
	pDC1->FillRect(rect,&brush_1);
	pDC1->SelectObject(brush_2);

	
	
		
				for(i=0;i<500;i++)
				{
		//		pDC1->Ellipse(i,fine0[i],i+1,fine0[i]+1); // ×¢Òâ¾ÍÐÐ
			pDC1->SetPixel(i+50,450-fine0[i],RGB(0,128,128)); 
				if(i%10==0)
				{
					pDC1->SetPixel(i-1+50,450-fine0[i]-1,RGB(0,0,0));
					pDC1->SetPixel(i-1+50,450-fine0[i]+1,RGB(0,0,0));
					pDC1->SetPixel(i+1+50,450-fine0[i]-1,RGB(0,0,0));
					pDC1->SetPixel(i+1+50,450-fine0[i]+1,RGB(0,0,0));
					pDC1->SetPixel(i-2+50,450-fine0[i]-2,RGB(0,0,0));
					pDC1->SetPixel(i-2+50,450-fine0[i]+2,RGB(0,0,0));
					pDC1->SetPixel(i+2+50,450-fine0[i]-2,RGB(0,0,0));
					pDC1->SetPixel(i+2+50,450-fine0[i]+2,RGB(0,0,0));
				}
				}
				for(i=0;i<5;i++)
				{
					pDC1->SetPixel(100+50,450-i,RGB(0,0,0));
					pDC1->SetPixel(200+50,450-i,RGB(0,0,0));
					pDC1->SetPixel(300+50,450-i,RGB(0,0,0));
					pDC1->SetPixel(400+50,450-i,RGB(0,0,0));
					pDC1->SetPixel(500+50,450-i,RGB(0,0,0));

					pDC1->SetPixel(i+50,450-50,RGB(0,0,0));
					pDC1->SetPixel(i+50,450-100,RGB(0,0,0));
					pDC1->SetPixel(i+50,450-150,RGB(0,0,0));
					pDC1->SetPixel(i+50,450-200,RGB(0,0,0));
				
				}
				for(i=0;i<=550;i++)
				{
					pDC1->SetPixel(i+50,450,RGB(0,0,0));
				
				}
				for(i=200;i<=450;i++)
					pDC1->SetPixel(50,i,RGB(0,0,0));
				pDC1->TextOut(50,451,"0");
				pDC1->TextOut(150,451,"0.1");
				pDC1->TextOut(250,451,"0.2");
				pDC1->TextOut(350,451,"0.3");
				pDC1->TextOut(450,451,"0.4");
				pDC1->TextOut(550,451,"0.5");

			
				pDC1->TextOut(30,450-50-10,"0.1");
				pDC1->TextOut(30,450-100-10,"0.2");
				pDC1->TextOut(30,450-150-10,"0.3");
				pDC1->TextOut(30,450-200-10,"0.4");


				pDC1->SetPixel(600-1,450-1,RGB(0,0,0));
				pDC1->SetPixel(600-2,450-2,RGB(0,0,0));
				pDC1->SetPixel(600-3,450-3,RGB(0,0,0));
				pDC1->SetPixel(600-4,450-4,RGB(0,0,0));
				pDC1->SetPixel(600-1,450+1,RGB(0,0,0));
				pDC1->SetPixel(600-2,450+2,RGB(0,0,0));
				pDC1->SetPixel(600-3,450+3,RGB(0,0,0));
				pDC1->SetPixel(600-4,450+4,RGB(0,0,0));

				pDC1->SetPixel(50-1,200+1,RGB(0,0,0));
				pDC1->SetPixel(50-2,200+2,RGB(0,0,0));
				pDC1->SetPixel(50-3,200+3,RGB(0,0,0));
				pDC1->SetPixel(50-4,200+4,RGB(0,0,0));
				pDC1->SetPixel(50+1,200+1,RGB(0,0,0));
				pDC1->SetPixel(50+2,200+2,RGB(0,0,0));
				pDC1->SetPixel(50+3,200+3,RGB(0,0,0));
				pDC1->SetPixel(50+4,200+4,RGB(0,0,0));

	 
}
void zhuigan(double *out,double *in1,double *in2,int n)
{
 double r[500];
 double m[500];
 double beta[500];
 int i;
 beta[1]=in1[1];
 r[1]=in2[1];
 for(i=1;i<=n-1;i++)
 {
  m[i]=1/beta[i];
  beta[i+1]=in1[i+1]-m[i];
  r[i+1]=in2[i+1]-m[i]*r[i];
 }
 out[n]=r[n]/beta[n];
 for(i=n-1;i>=1;i--)
 {
  out[i]=(r[i]-out[i+1])/beta[i];
 }
}
void do_fine0(double *in,int n)
{
 int i;
 in[0]=0;
 for(i=1;i<=n;i++)
 {
  in[i]=log((M*H*i/(2*NI))+sqrt((M*H*i/(2*NI))*(M*H*i/(2*NI))+1))/THT;
 }
}
void do_b(double *out,double *in,int n)
{
 int i;
 for(i=1;i<=n-1;i++)
 {
  out[i]=-2-(Q/EBXL)*THT*NI*H*H*(exp(-THT*in[i])+exp(THT*in[i]));
 }
}

void do_j(double *out,double *in,int n)
{
 int i;
 for(i=1;i<=n-1;i++)
 {
  out[i]=-(Q/EBXL)*H*H*(M*i*H+NI*exp(-THT*in[i])-NI*exp(THT*in[i]))-in[i-1]+2*in[i]-in[i+1];
 }
}

void exchange(double *out,double *in,int n)
{
 int i;
 for(i=1;i<=n;i++)
 {
  out[i]=in[i]+out[i];
 }
}
int check(double *in,int n)
{
 int i;
 for(i=0;i<=n;i++)
 {
  if(fabs(in[i])>1.0e-4)return 0;
 
 }
  return 1;
}