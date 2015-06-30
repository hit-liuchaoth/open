// bigfish_test1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "bigfish_test1.h"
#include "bigfish_test1Dlg.h"

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
// CBigfish_test1Dlg dialog

CBigfish_test1Dlg::CBigfish_test1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CBigfish_test1Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBigfish_test1Dlg)
	m_edit1 = 0;
	m_edit2 = 0;
	m_edit3 = 0;
	m_edit4 = 0;
	m_edit5 = 0;
	m_edit6 = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CBigfish_test1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBigfish_test1Dlg)
	DDX_Text(pDX, IDC_EDIT1, m_edit1);
	DDX_Text(pDX, IDC_EDIT2, m_edit2);
	DDX_Text(pDX, IDC_EDIT3, m_edit3);
	DDX_Text(pDX, IDC_EDIT4, m_edit4);
	DDX_Text(pDX, IDC_EDIT5, m_edit5);
	DDX_Text(pDX, IDC_EDIT6, m_edit6);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CBigfish_test1Dlg, CDialog)
	//{{AFX_MSG_MAP(CBigfish_test1Dlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test1Dlg message handlers

BOOL CBigfish_test1Dlg::OnInitDialog()
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
	SetTimer(1,TIME,NULL);
	po.x=0;
	po.y=0;
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CBigfish_test1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CBigfish_test1Dlg::OnPaint() 
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
HCURSOR CBigfish_test1Dlg::OnQueryDragIcon()
{

	return (HCURSOR) m_hIcon;
}

BOOL CBigfish_test1Dlg::PreTranslateMessage(MSG* pMsg) 
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message==WM_KEYUP)
	{
			switch(pMsg->wParam)
			{
			case 37:
				m_edit1=0;
				break;
			case 38:
				m_edit2=0;
				break;
			case 39:
				m_edit3=0;
				break;
			case 40:
				m_edit4=0;
				break;
			}
			UpdateData(FALSE);
	}
	else if(pMsg->message==WM_KEYDOWN)
	{
			switch(pMsg->wParam)
			{
			case 37:
				m_edit1=1;
				break;
			case 38:
				m_edit2=1;
				break;
			case 39:
				m_edit3=1;
				break;
			case 40:
				m_edit4=1;
				break;

			}
			
			UpdateData(FALSE);
	}
	
	return CDialog::PreTranslateMessage(pMsg);
}

void CBigfish_test1Dlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	switch(nIDEvent)
	{
	case 1:
		if((m_edit1==1&&m_edit3==0))
		{
			if(m_edit5>(-5))
				m_edit5--;
		}
		if((m_edit1==0&&m_edit3==1))
		{
			if(m_edit5<5)
				m_edit5++;
		}
		if(m_edit1==1&&m_edit3==1||(m_edit1==0&&m_edit3==0))
		{
			if(m_edit5>0)
				m_edit5--;
			else if(m_edit5<0)
				m_edit5++;
		}



		if((m_edit4==1&&m_edit2==0))
		{
			if(m_edit6>(-5))
				m_edit6--;
		}
		if((m_edit4==0&&m_edit2==1))
		{
			if(m_edit6<5)
				m_edit6++;
		}
		if(m_edit4==1&&m_edit2==1||(m_edit4==0&&m_edit2==0))
		{
			if(m_edit6>0)
				m_edit6--;
			else if(m_edit6<0)
				m_edit6++;
		}
		if(po.x>0&&po.x<50)
			po.x+=m_edit5;
		if(po.y>0&&po.y<50)
			po.y+=m_edit6;
		
		UpdateData(FALSE);
//		ToPaint();
		break;
	}
	CDialog::OnTimer(nIDEvent);
}

void CBigfish_test1Dlg::ToPaint()
{
	CStatic*   pWnd   =   (CStatic*)GetDlgItem(IDC_STATIC); 
	COLORREF col;
	col=(200,200,200);
	//根据句柄得到dc 
	CDC*   pDC   =   pWnd-> GetDC(); 

	//得到dc的客户区域，并创建画刷填充这个区域 
	CRect   rc; 
	pWnd-> GetClientRect(&rc); 
	CBrush   brush; 
	brush.CreateSolidBrush(RGB(0,255,0)); 
	pDC-> FillRect(&rc,&brush); 

	//设置dc的裁减区域为客户区域，因为STATIC并不具有真正的dc 
	//而是其父窗口的dc，所以用裁减来避免画到客户区域外面去 
	CRgn   rgn; 
	rgn.CreateRectRgn(rc.left,rc.top,rc.right,rc.bottom); 
	pDC-> SelectClipRgn(&rgn); 
	pDC->SetPixel(po,col);
	pWnd-> ReleaseDC(pDC);
}