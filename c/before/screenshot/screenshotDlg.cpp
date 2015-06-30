// screenshotDlg.cpp : implementation file
//

#include "stdafx.h"
#include "screenshot.h"
#include "screenshotDlg.h"

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
// CScreenshotDlg dialog

CScreenshotDlg::CScreenshotDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CScreenshotDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CScreenshotDlg)
	m_px1 = 0;
	m_py1 = 0;
	m_px2 = 0;
	m_py2 = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

}

void CScreenshotDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CScreenshotDlg)
	DDX_Text(pDX, IDC_EDIT1, m_px1);
	DDX_Text(pDX, IDC_EDIT2, m_py1);
	DDX_Text(pDX, IDC_EDIT3, m_px2);
	DDX_Text(pDX, IDC_EDIT4, m_py2);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CScreenshotDlg, CDialog)
	//{{AFX_MSG_MAP(CScreenshotDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnFuntion_on)
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CScreenshotDlg message handlers

BOOL CScreenshotDlg::OnInitDialog()
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

void CScreenshotDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CScreenshotDlg::OnPaint() 
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
HCURSOR CScreenshotDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CScreenshotDlg::OnFuntion_on() 
{
	// TODO: Add your control notification handler code here
	down_flag=1;	
}


void CScreenshotDlg::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if(down_flag==2)
	{
		up_pos=point;
		down_flag=0;
	}
	CDialog::OnLButtonUp(nFlags, point);
}

void CScreenshotDlg::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if(down_flag==1)
	{
		down_pos=point;
		down_flag=2;
	}
	CDialog::OnLButtonDown(nFlags, point);
}

void CScreenshotDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	CRect r;
	LPRECT lpr;
	HBITMAP ret;
	r.bottom=m_py2;
	r.right=m_px2;
	r.top=m_py1;
	r.left=m_px1;

	lpr=(LPRECT )r;
	ret=CopyScreenToBitmap(lpr);
	if (OpenClipboard()) 

     //hWndΪ���򴰿ھ��

      {

        //��ռ�����

        EmptyClipboard();

        //����Ļ����ճ������������,

  //      hBitmap Ϊ�ղŵ���Ļλͼ���

        SetClipboardData(CF_BITMAP, ret);

        //�رռ�����

        CloseClipboard();

      }
}

HBITMAP CopyScreenToBitmap(LPRECT lpRect)

 //lpRect ����ѡ������

{

HDC       hScrDC, hMemDC;      

 // ��Ļ���ڴ��豸������

HBITMAP    hBitmap, hOldBitmap;   

 // λͼ���

int       nX, nY, nX2, nY2;      

// ѡ����������

int       nWidth, nHeight;      

// λͼ��Ⱥ͸߶�

int       xScrn, yScrn;         

// ��Ļ�ֱ���



   // ȷ��ѡ������Ϊ�վ���

   if (IsRectEmpty(lpRect))

     return NULL;

   //Ϊ��Ļ�����豸������

   hScrDC = CreateDC("DISPLAY", NULL, NULL, NULL);

   //Ϊ��Ļ�豸�����������ݵ��ڴ��豸������

   hMemDC = CreateCompatibleDC(hScrDC);

   // ���ѡ����������

   nX = lpRect->left;

   nY = lpRect->top;

   nX2 = lpRect->right;

   nY2 = lpRect->bottom;

   // �����Ļ�ֱ���

   xScrn = GetDeviceCaps(hScrDC, HORZRES);

   yScrn = GetDeviceCaps(hScrDC, VERTRES);

   //ȷ��ѡ�������ǿɼ���

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

   // ����һ������Ļ�豸��������ݵ�λͼ

hBitmap = CreateCompatibleBitmap

 (hScrDC, nWidth, nHeight);

   // ����λͼѡ���ڴ��豸��������

   hOldBitmap = (HBITMAP )SelectObject(hMemDC, hBitmap);

   // ����Ļ�豸�����������ڴ��豸��������

BitBlt(hMemDC, 0, 0, nWidth, nHeight,

 hScrDC, nX, nY, SRCCOPY);

   //�õ���Ļλͼ�ľ��

   hBitmap =(HBITMAP) SelectObject(hMemDC, hOldBitmap);

   //��� 

   DeleteDC(hScrDC);

   DeleteDC(hMemDC);

   // ����λͼ���

   return hBitmap;

}






void CScreenshotDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	ClientToScreen(& down_pos);
	ClientToScreen(& up_pos);
	m_px1=down_pos.x;
	m_py1=down_pos.y;
	m_px2=up_pos.x;
	m_py2=up_pos.y;
	UpdateData(FALSE);
}
