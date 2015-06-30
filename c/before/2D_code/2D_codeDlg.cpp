// 2D_codeDlg.cpp : implementation file
//

#include "stdafx.h"
#include "2D_code.h"
#include "2D_codeDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy2D_codeDlg dialog

CMy2D_codeDlg::CMy2D_codeDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMy2D_codeDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMy2D_codeDlg)
	m_edit2 = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy2D_codeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMy2D_codeDlg)
	DDX_Control(pDX, IDC_EDIT4, m_edit4);
	DDX_Control(pDX, IDC_EDIT3, m_edit3);
	DDX_Control(pDX, IDC_EDIT1, m_edit1);
	DDX_Text(pDX, IDC_EDIT2, m_edit2);
	DDV_MinMaxUInt(pDX, m_edit2, 0, 100000000);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMy2D_codeDlg, CDialog)
	//{{AFX_MSG_MAP(CMy2D_codeDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT2, OnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy2D_codeDlg message handlers

BOOL CMy2D_codeDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	m_edit1.SetLimitText(20);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMy2D_codeDlg::OnPaint() 
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
HCURSOR CMy2D_codeDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMy2D_codeDlg::OnChangeEdit2() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	UpdateData(TRUE);
	// TODO: Add your control notification handler code here
	
}

void CMy2D_codeDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	CString str;
	char *p,q;
	bool b[16];
	int i,j,k,m,n;
	CWnd * x=(CWnd *) GetDlgItem(IDC_STATIC);
	CDC * pDC1 =x->GetDC() ;
	srand(time(NULL));
	CBrush brush_1(RGB(255,255,255));
	CBrush brush_2(RGB(0,0,0));
	CRect rect(0,0,48,48);
	
	pDC1->Rectangle(rect);
	pDC1->FillRect(rect,&brush_1);
	pDC1->SelectObject(brush_2);
	for(i=0;i<48;i++)
	{
		for(j=0;j<48;j++)
		{
			pix[i][j]=0;
		}
	}
	for(i=8;i<40;i++)
	{
		for(j=8;j<40;j++)
		{
			pix[i][j]=rand()%2;
		}
	}
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			pix[i][j]=1;
			pix[i+40][j]=1;
			pix[i+40][j+40]=1;
			pix[i][j+40]=1;
		}
	}
	m_edit1.GetWindowText(str);
	p=str.GetBuffer(str.GetLength());
	m=str.GetLength();//字节。。


	for(i=0;i<48;i++)
	{
		for(j=0;j<48;j++)
		{
			if(pix[i][j]==1)
				pDC1->SetPixel(i,j,RGB(0,0,0));
		}
	}
}

void CMy2D_codeDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	int i,j,k,ret;
	int m,n,z,y;
	char p[20];
	ret=0;
	CBitmap bi;
	CDC dc;
	CDC *pDC=GetDC();
	CRect r;
	LPRECT lpr;
	HBITMAP ret1;
	CPoint point_1(0,0),point_2(SM_CXSCREEN,SM_CYSCREEN);


	
	
	r.bottom=point_2.y;
	r.right=point_2.x;
	r.top=point_1.y;
	r.left=point_1.x;

	lpr=(LPRECT )r;
	ret1=CopyScreenToBitmap(lpr);
	bi.FromHandle(ret1);
	dc.CreateCompatibleDC(pDC);
	SelectObject(dc,ret1);
	n=0;
	for(i=0;i<1024;i++)//SM_CXSCREEN
	{
		for(j=0;j<768;j++)//SM_CYSCREEN
		{
			if(dc.GetPixel(i,j)==0)
			{
				for(m=i;m<i+8;m++)
				{
					if(dc.GetPixel(m,j)!=0)break;
					if(dc.GetPixel(m,j+1)!=0)break;
					if(dc.GetPixel(m,j+2)!=0)break;
					if(dc.GetPixel(m,j+3)!=0)break;
					if(dc.GetPixel(m,j+4)!=0)break;
					if(dc.GetPixel(m,j+5)!=0)break;
					if(dc.GetPixel(m,j+6)!=0)break;
					if(dc.GetPixel(m,j+7)!=0)break;

					if(dc.GetPixel(m+40,j)!=0)break;
					if(dc.GetPixel(m+40,j+1)!=0)break;
					if(dc.GetPixel(m+40,j+2)!=0)break;
					if(dc.GetPixel(m+40,j+3)!=0)break;
					if(dc.GetPixel(m+40,j+4)!=0)break;
					if(dc.GetPixel(m+40,j+5)!=0)break;
					if(dc.GetPixel(m+40,j+6)!=0)break;
					if(dc.GetPixel(m+40,j+7)!=0)break;

					if(dc.GetPixel(m,j+40)!=0)break;
					if(dc.GetPixel(m,j+1+40)!=0)break;
					if(dc.GetPixel(m,j+2+40)!=0)break;
					if(dc.GetPixel(m,j+3+40)!=0)break;
					if(dc.GetPixel(m,j+4+40)!=0)break;
					if(dc.GetPixel(m,j+5+40)!=0)break;
					if(dc.GetPixel(m,j+6+40)!=0)break;
					if(dc.GetPixel(m,j+7+40)!=0)break;
					
					n=1;
				}	
			}
			if(n==1)break;
		}
		if(n==1)break;
	}
	for(z=0;z<20;z++)
	{
		p[z]=0;
	}
	if(n==1)
	{
		for(z=0;z<4;z++)
		{
			for(y=0;y<4;y++)
			{	
				if(dc.GetPixel(i+8+z*8,j+8+y*8)==0)
				{
					for(k=0;k<8;k++)
					{
						if(dc.GetPixel(i+8+z*8+k,j+8+y*8+1)==0)
						{
							p[ret]|=0x80;
						}
						if(dc.GetPixel(i+8+z*8+k,j+8+y*8+2)==0)
						{
							p[ret+1]|=0x80;
						}
					}
					ret++;
				}
			}
		}
	}
	m_edit3.SetWindowText(p);
}

void CMy2D_codeDlg::code1(char *p,int m)
{
	int i,j,k,n;
	bool b[16];
	for(i=0;i<16;i++)
	{
		b[i]=0;
	}
	if(m%2)
	{
		k=m/2+1;
	}
	else
	{
		k=m/2;
	}

	while(k)
	{
		n=rand()%16;
		if(b[n]==1)
			break;
		else
			b[n]=1;
		k--;
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(b[i*4+j])
			{
				pix[i*8+8][j*8+8]=1;
				if(n<m)
				{
					for(k=0;k<8;k++)
					{	
						if((*(p+n)>>k)&0x01)
						{
							pix[i*8+8+k][j*8+8+1]=1;
						}
						else
							pix[i*8+8+k][j*8+8+1]=0;
						if((*(p+n+1)>>k)&0x01)
						{
							pix[i*8+8+k][j*8+8+2]=1;
						}
						else
							pix[i*8+8+k][j*8+8+2]=0;	
					}
					n=n+2;
				}
			}
			else
				pix[i*8+8][j*8+8]=0;
		}
	}
}

HBITMAP CopyScreenToBitmap(LPRECT lpRect)

 //lpRect 代表选定区域

{

HDC       hScrDC, hMemDC;      

 // 屏幕和内存设备描述表

HBITMAP    hBitmap, hOldBitmap;   

 // 位图句柄

int       nX, nY, nX2, nY2;      

// 选定区域坐标

int       nWidth, nHeight;      

// 位图宽度和高度

int       xScrn, yScrn;         

// 屏幕分辨率



   // 确保选定区域不为空矩形

   if (IsRectEmpty(lpRect))

     return NULL;

   //为屏幕创建设备描述表

   hScrDC = CreateDC("DISPLAY", NULL, NULL, NULL);

   //为屏幕设备描述表创建兼容的内存设备描述表

   hMemDC = CreateCompatibleDC(hScrDC);

   // 获得选定区域坐标

   nX = lpRect->left;

   nY = lpRect->top;

   nX2 = lpRect->right;

   nY2 = lpRect->bottom;

   // 获得屏幕分辨率

   xScrn = GetDeviceCaps(hScrDC, HORZRES);

   yScrn = GetDeviceCaps(hScrDC, VERTRES);

   //确保选定区域是可见的

   if (nX < 0)

      nX = 0;

   if (nY < 0)

      nY = 0;

   if (nX2 > xScrn)

      nX2 = xScrn;

   if (nY2 > yScrn)

      nY2 = yScrn;

   nWidth = nX2 - nX;

   nHeight = nY2 - nY;

   // 创建一个与屏幕设备描述表兼容的位图

hBitmap = CreateCompatibleBitmap

 (hScrDC, nWidth, nHeight);

   // 把新位图选到内存设备描述表中

   hOldBitmap = (HBITMAP )SelectObject(hMemDC, hBitmap);

   // 把屏幕设备描述表拷贝到内存设备描述表中

BitBlt(hMemDC, 0, 0, nWidth, nHeight,

 hScrDC, nX, nY, SRCCOPY);

   //得到屏幕位图的句柄

   hBitmap =(HBITMAP) SelectObject(hMemDC, hOldBitmap);

   //清除 

   DeleteDC(hScrDC);

   DeleteDC(hMemDC);

   // 返回位图句柄

   return hBitmap;
}

