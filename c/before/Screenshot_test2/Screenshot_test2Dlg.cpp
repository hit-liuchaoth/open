// Screenshot_test2Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "Screenshot_test2.h"
#include "Screenshot_test2Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


#define R1 5
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
// CScreenshot_test2Dlg dialog

CScreenshot_test2Dlg::CScreenshot_test2Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CScreenshot_test2Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CScreenshot_test2Dlg)
	m_pos_x = 0;
	m_pos_y = 0;
	m_data = _T("");
	m_data2 = 0;
	m_data_5 = 0;
	m_data_6 = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CScreenshot_test2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CScreenshot_test2Dlg)
	DDX_Text(pDX, IDC_EDIT2, m_pos_x);
	DDX_Text(pDX, IDC_EDIT3, m_pos_y);
	DDX_Text(pDX, IDC_EDIT1, m_data);
	DDV_MaxChars(pDX, m_data, 16);
	DDX_Text(pDX, IDC_EDIT4, m_data2);
	DDX_Text(pDX, IDC_EDIT5, m_data_5);
	DDX_Text(pDX, IDC_EDIT6, m_data_6);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CScreenshot_test2Dlg, CDialog)
	//{{AFX_MSG_MAP(CScreenshot_test2Dlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_MOUSEMOVE()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CScreenshot_test2Dlg message handlers

BOOL CScreenshot_test2Dlg::OnInitDialog()
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
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CScreenshot_test2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CScreenshot_test2Dlg::OnPaint() 
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
HCURSOR CScreenshot_test2Dlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CScreenshot_test2Dlg::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_pos_x=point.x;
	m_pos_y=point.y;
	UpdateData(FALSE);
	CDialog::OnMouseMove(nFlags, point);
}

void CScreenshot_test2Dlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	CRect r;
	LPRECT lpr;
	HBITMAP ret;
	CPoint point_1(46,45),point_2(110,61);
	ClientToScreen(&point_1);
	ClientToScreen(&point_2);
	r.bottom=point_2.y;
	r.right=point_2.x;
	r.top=point_1.y;
	r.left=point_1.x;

	lpr=(LPRECT )r;
	ret=CopyScreenToBitmap(lpr);
	if (OpenClipboard()) 

     //hWnd为程序窗口句柄

      {

        //清空剪贴板

        EmptyClipboard();

        //把屏幕内容粘贴到剪贴板上,

  //      hBitmap 为刚才的屏幕位图句柄

        SetClipboardData(CF_BITMAP, ret);

        //关闭剪贴板

        CloseClipboard();

      }
}

void CScreenshot_test2Dlg::OnChangeEdit1() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	UpdateData(TRUE);
	// TODO: Add your control notification handler code here
	
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

void CScreenshot_test2Dlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	CBitmap bi;
	CDC dc;
	CDC *pDC=GetDC();
	CRect r;
	LPRECT lpr;
	HBITMAP ret;
	CPoint point_1(46,45),point_2(110,61);

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
	{
		m_data2=dc.GetPixel(m_data_5,m_data_6);
		if(m_data_5==63)
		{
			m_data_5=1;
			m_data_6++;
		}
		else m_data_5++;		
		UpdateData(FALSE);
	}
}

void CScreenshot_test2Dlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	CBitmap bi;
	CDC dc;
	CDC *pDC=GetDC();
	CRect r;
	LPRECT lpr;
	HBITMAP ret;
	CPoint point_1(46,45),point_2(110,61);

	int i=1,j=1;
	int data[16][16];

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
		for(j=0;j<16;j++)
		{
			if(dc.GetPixel(i,j)==0)
			{
				data[i][j]=1;
			}
		}
	}

	CWnd * x=(CWnd *) GetDlgItem(IDC_STATIC);
	CDC * pDC1 =x->GetDC() ;
	
	CBrush brush_1(RGB(0,0,0));
	CBrush brush_2(RGB(255,0,0));
	CRect rect(0,0,160,160);
	
	pDC1->Rectangle(rect);
	pDC1->FillRect(rect,&brush_1);
	pDC1->SelectObject(brush_2);
//	for(i=0;i<16;i++)
//	{
//		for(j=0;j<8;j++)
//		{
//			metrix[i][j]=1;
//		}
//	}
	for(i=0;i<16;i++)
	{
		for(j=0;j<16;j++)
		{
			if(data[i][j]==1)
			{
				pDC1->Ellipse(10 * i+5-R1,10*j+5-R1,10*i+5+R1,10*j+5+R1);
			}
		}
	}
}
