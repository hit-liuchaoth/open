// Final_test2Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "Final_test2.h"
#include "Final_test2Dlg.h"

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
// CFinal_test2Dlg dialog

CFinal_test2Dlg::CFinal_test2Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CFinal_test2Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CFinal_test2Dlg)
	m_data = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CFinal_test2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CFinal_test2Dlg)
	DDX_Control(pDX, IDC_MSCOMM1, m_uart);
	DDX_Text(pDX, IDC_EDIT1, m_data);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CFinal_test2Dlg, CDialog)
	//{{AFX_MSG_MAP(CFinal_test2Dlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFinal_test2Dlg message handlers

BOOL CFinal_test2Dlg::OnInitDialog()
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

void CFinal_test2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CFinal_test2Dlg::OnPaint() 
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
HCURSOR CFinal_test2Dlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

BEGIN_EVENTSINK_MAP(CFinal_test2Dlg, CDialog)
    //{{AFX_EVENTSINK_MAP(CFinal_test2Dlg)
	ON_EVENT(CFinal_test2Dlg, IDC_MSCOMM1, 1 /* OnComm */, OnOnCommMscomm1, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void CFinal_test2Dlg::OnOnCommMscomm1() 
{
	// TODO: Add your control notification handler code here
	VARIANT var;
	long k,len;
	COleSafeArray safearray_inp;
	BYTE rxdata[5];
	CString strtemp;
	
	switch(m_uart.GetCommEvent())
	{
	case 1:
		break;
	case 2:
		var=m_uart.GetInput();
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
			m_data+=strtemp;
		}
		UpdateData(FALSE);
	}

}

void CFinal_test2Dlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	m_uart.SetCommPort(4);
	m_uart.SetInBufferSize(4096);
	m_uart.SetOutBufferSize(4096);
	if(!m_uart.GetPortOpen())
	{
		m_uart.SetPortOpen(1);
	}
	m_uart.SetInputMode(1);
	m_uart.SetSettings("115200,n,8,1");
	m_uart.SetRThreshold(1);
	m_uart.SetInputLen(0);
	m_uart.GetInput();
}

void CFinal_test2Dlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	int i;
	CByteArray array;
	char data[7]={'b',0,64,32,0,1,0};
	array.RemoveAll();
	array.SetSize(7);
	for(i=0;i<7;i++)
	{
		array.SetAt(i,data[i]);
	}
	m_uart.SetOutput(COleVariant(array));
}

void CFinal_test2Dlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	volatile int i,j;
	CByteArray array;
	array.RemoveAll();
	array.SetSize(2);
	array.SetAt(0,'c');
	array.SetAt(1,0);
	m_uart.SetOutput(COleVariant(array));
	for(i=0;i<2048;i++)
	{
		tempchar[i]='x';
	}
	count=0;
	char_left=64;
	ret=SetTimer(1,150,0);
/*	array.RemoveAll();
	array.SetSize(7);
	array.SetAt(0,'g');

	array.SetAt(0,0);
	array.SetAt(0,0);
	array.SetAt(0,0);
	array.SetAt(0,0);
	array.SetAt(0,0);
	array.SetAt(0,0);
	m_uart.SetOutput(COleVariant(array));*/
}

void CFinal_test2Dlg::OnButton4()
{
	// TODO: Add your control notification handler code here
	CByteArray array;
	array.RemoveAll();
	array.SetSize(1);
	array.SetAt(0,'i');
	m_uart.SetOutput(COleVariant(array));
}

void CFinal_test2Dlg::OnButton5() 
{
	// TODO: Add your control notification handler code here
	int i,j;
	CByteArray array;
	array.RemoveAll();
	array.SetSize(1);
	array.SetAt(0,'j');
	m_uart.SetOutput(COleVariant(array));
	array.RemoveAll();
	array.SetSize(256);
	for(i=0;i<256;i++)
	{
		tempchar[i]=0x7e;
	}
	char_left=16;
	count=0;
	ret=SetTimer(1,150,0);
}

void CFinal_test2Dlg::OnTimer(UINT nIDEvent) 
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
			m_uart.SetOutput(COleVariant(array));	
		}
		else
		KillTimer(ret);
		break;
	default:
		break;
	}
	CDialog::OnTimer(nIDEvent);
}
