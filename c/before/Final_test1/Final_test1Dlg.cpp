// Final_test1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "Final_test1.h"
#include "Final_test1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFinal_test1Dlg dialog

CFinal_test1Dlg::CFinal_test1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CFinal_test1Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CFinal_test1Dlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CFinal_test1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CFinal_test1Dlg)
	DDX_Control(pDX, IDC_BUTTON6, m_button6);
	DDX_Control(pDX, IDC_BUTTON5, m_button5);
	DDX_Control(pDX, IDC_BUTTON4, m_button4);
	DDX_Control(pDX, IDC_MSCOMM1, m_comm);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CFinal_test1Dlg, CDialog)
	//{{AFX_MSG_MAP(CFinal_test1Dlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFinal_test1Dlg message handlers

BOOL CFinal_test1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	m_button5.EnableWindow(FALSE);
	m_button6.EnableWindow(FALSE);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CFinal_test1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CFinal_test1Dlg::OnPaint() 
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
HCURSOR CFinal_test1Dlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CFinal_test1Dlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void CFinal_test1Dlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	//生成文件按钮

	CBitmap bi;
	CDC dc;
	CDC *pDC=GetDC();
	CRect r;
	LPRECT lpr;
	HBITMAP ret;
	CPoint point_1(BASEX,BASEY),point_2(BASEX+128,BASEY+32);//base 32.45  48.61

	int i,j,m,n;
	
	ClientToScreen(&point_1);
	ClientToScreen(&point_2);
	r.bottom=point_2.y;
	r.right=point_2.x;
	r.top=point_1.y;
	r.left=point_1.x;

	lpr=(LPRECT )r;
	ret=CopyScreenToBitmap(lpr);
	bi.FromHandle(ret);
	dc.CreateCompatibleDC(pDC);
	SelectObject(dc,ret);
	

			for(i=0;i<16;i++)
			{
				for(j=0;j<128;j++)
				{
					if(dc.GetPixel(j,i)==0)//黑色是0 . 注意 （j，i）
					{
						data[i][j]=1;		
					}
					else 
					{
						data[i][j]=0;
					}
				}
			}
		

	CWnd * x=(CWnd *) GetDlgItem(IDC_STATIC1);
	CDC * pDC1 =x->GetDC() ;
	
	CBrush brush_1(RGB(0,0,0));
	CBrush brush_2(RGB(255,0,0));
	CRect rect(0,0,D1*128,D1*16);
	
	pDC1->Rectangle(rect);
	pDC1->FillRect(rect,&brush_1);
	pDC1->SelectObject(brush_2);

	
	
			for(i=0;i<16;i++)
			{
				for(j=0;j<128;j++)
				{
					if(data[i][j]==1)
					{
						pDC1->Ellipse(D1 * j+R1-R1,D1*i+R1-R1,D1*j+R1+R1,D1*i+R1+R1); // 注意就行
					}
				}
			}
	for(i=0;i<32;i++)
	{
		for(j=0;j<8;j++)
		{
			tx[i][j]=0;
		}
	}
	for(i=0;i<16;i++)
	{
		for(j=0;j<8;j++)
		{
			for(m=0;m<8;m++)
			{
				if(data[i][j*8+m])
				{
					tx[i][7-j]|=0x01<<m;
				}
				if(data[i][64+j*8+m])
				{
					tx[16+i][7-j]|=0x01<<m;
				}
			}
		}
	}
	for(i=0;i<32;i++)
	{
		for(j=0;j<8;j++)
		{
			tempchar[i*8+j]=tx[i][j];
		}
	}
	
}

void CFinal_test1Dlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	
}

void CFinal_test1Dlg::OnButton4() 
{
	// TODO: Add your control notification handler code here
	m_comm.SetCommPort(4);
	m_comm.SetInBufferSize(1024);
	m_comm.SetOutBufferSize(1024);
	if(!m_comm.GetPortOpen())
	{
		m_comm.SetPortOpen(TRUE);
	}
	if(m_comm.GetPortOpen())
	{
		m_button5.EnableWindow(TRUE);
		m_button6.EnableWindow(TRUE);
	}
	m_comm.SetInputMode(1);
	m_comm.SetSettings("115200,n,8,1");
	m_comm.SetRThreshold(1);
	m_comm.SetInputLen(0);
	m_comm.GetInput();
	m_button4.EnableWindow(FALSE);
}

void CFinal_test1Dlg::OnButton5() 
{
	// TODO: Add your control notification handler code here
	if(m_comm.GetPortOpen())
	{
		m_comm.SetPortOpen(FALSE);
		m_button6.EnableWindow(FALSE);
		m_button4.EnableWindow(TRUE);
		m_button5.EnableWindow(FALSE);
	}//这里可能出错
}

void CFinal_test1Dlg::OnButton6() 
{
	// TODO: Add your control notification handler code here
		int i,j;
	CByteArray array;
	array.RemoveAll();
	array.SetSize(1);
	array.SetAt(0,'j');
	m_comm.SetOutput(COleVariant(array));
	array.RemoveAll();
	array.SetSize(256);
	char_left=16;
	count=0;
	ret=SetTimer(1,150,0);
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



void CFinal_test1Dlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	switch(nIDEvent)
	{
	case 1:
		if(char_left>0)
		{
			int i;
			CByteArray array;
			array.RemoveAll();
			array.SetSize(16);
			for(i=0;i<16;i++)
			{
				array.SetAt(i,tempchar[i+16*count]);
			}
			count++;
			char_left--;
			m_comm.SetOutput(COleVariant(array));	
		}
		else
		KillTimer(ret);
		break;
	default:
		break;
	}
	CDialog::OnTimer(nIDEvent);
}
