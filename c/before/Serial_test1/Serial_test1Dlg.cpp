// Serial_test1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "Serial_test1.h"
#include "Serial_test1Dlg.h"

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
// CSerial_test1Dlg dialog

CSerial_test1Dlg::CSerial_test1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSerial_test1Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSerial_test1Dlg)
	m_data_2 = 0;
	m_data_1 = _T("");
	//}}AFX_DATA_INIT
	
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSerial_test1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSerial_test1Dlg)
	DDX_Text(pDX, IDC_EDIT2, m_data_2);
	DDX_Text(pDX, IDC_EDIT1, m_data_1);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CSerial_test1Dlg, CDialog)
	//{{AFX_MSG_MAP(CSerial_test1Dlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// CSerial_test1Dlg message handlers

BOOL CSerial_test1Dlg::OnInitDialog()
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

void CSerial_test1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CSerial_test1Dlg::OnPaint() 
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
HCURSOR CSerial_test1Dlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CSerial_test1Dlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
//	CMSComm Cmscomm;

}

void CSerial_test1Dlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	if(Cmscomm.Create(NULL,WS_VISIBLE|WS_CHILD,CRect(0,0,0,0),this,IDC_MSCOMM1))
	{
		m_data_2=1;
		UpdateData(FALSE);
	}
	Cmscomm.SetCommPort(1);
	Cmscomm.SetInBufferSize(1024);
	Cmscomm.SetOutBufferSize(1024);
	if(!Cmscomm.GetPortOpen())
	{
		Cmscomm.SetPortOpen(TRUE);
		m_data_2=2;
		UpdateData(FALSE);
	}
	Cmscomm.SetInputMode(1);
	Cmscomm.SetSettings("115200,n,8,1");
	Cmscomm.SetRThreshold(1);
	Cmscomm.SetInputLen(0);
	Cmscomm.GetInput();
}


BEGIN_EVENTSINK_MAP(CSerial_test1Dlg, CDialog)
    //{{AFX_EVENTSINK_MAP(CSerial_test1Dlg)
	ON_EVENT(CSerial_test1Dlg, IDC_MSCOMM1, 1 /* OnComm */, OnOnCommMscomm1, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void CSerial_test1Dlg::OnOnCommMscomm1() 
{
	// TODO: Add your control notification handler code here
	VARIANT var;
	long k,len;
	COleSafeArray safearray_inp;
	BYTE rxdata[5];
	CString strtemp;
	
	
	if(Cmscomm.GetCommEvent()==2)
	{
		var=Cmscomm.GetInput();
		safearray_inp=var;
		len=safearray_inp.GetOneDimSize();
		for(k=0;k<len;k++)
		{
			safearray_inp.GetElement(&k,rxdata+k);
		}
		for(k=0;k<len;k++)
		{
			BYTE bt;
			bt=*(char*)(rxdata+k);
			strtemp.Format("%c",bt);
			m_data_1+=strtemp;
		}
		UpdateData(FALSE);
	}	
}
