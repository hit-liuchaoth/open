// Scroll_testDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Scroll_test.h"
#include "Scroll_testDlg.h"

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
// CScroll_testDlg dialog

CScroll_testDlg::CScroll_testDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CScroll_testDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CScroll_testDlg)
	m_edit1 = _T("");
	m_edit4 = 0;
	m_edit5 = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CScroll_testDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CScroll_testDlg)
	DDX_Control(pDX, IDC_BUTTON3, m_button3);
	DDX_Control(pDX, IDC_EDIT2, m_edit2);
	DDX_Control(pDX, IDC_EDIT3, m_edit3);
	DDX_Text(pDX, IDC_EDIT1, m_edit1);
	DDX_Text(pDX, IDC_EDIT4, m_edit4);
	DDV_MinMaxUInt(pDX, m_edit4, 0, 99999);
	DDX_Text(pDX, IDC_EDIT5, m_edit5);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CScroll_testDlg, CDialog)
	//{{AFX_MSG_MAP(CScroll_testDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_WM_TIMER()
	ON_WM_DESTROY()
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CScroll_testDlg message handlers

BOOL CScroll_testDlg::OnInitDialog()
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
	
	mysql=(MYSQL *)malloc(sizeof(MYSQL));////////////this is important!!
	mysql_init(mysql);
	if(!mysql_real_connect(mysql,"joey890228.vicp.net","admin","password","new1",3306,NULL,0))
//	if(!mysql_real_connect(mysql,LINKTO,"admin","password","new1",3306,NULL,0))//linkto see Dlg.h
//	if(!mysql_real_connect(mysql,"localhost","root","liyang123","test",3306,NULL,0))
	{
		//mydb为你所创建的数据库，3306为端口号，可自行设定
	AfxMessageBox(mysql_error(mysql));
	return FALSE;
	}
	c=0;
//	ask="select * from stu";
	
	ask="select * from student";
	SetTimer(1,100,NULL);
	m_edit3.SetWindowText("匿名");
	str_name="匿名";
	UpdateData(FALSE);
	count=1;
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CScroll_testDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CScroll_testDlg::OnPaint() 
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
HCURSOR CScroll_testDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CScroll_testDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	char x[20];
	UpdateData(TRUE);
	m_buffer1.Empty();
	m_buffer2.Empty();
	itoa(m_edit4+c,x,10);
	m_edit5=m_edit4+c;
	m_buffer1+="insert into student value(";
	m_buffer1+=x;
	m_buffer1+=", \"";
	m_buffer1+=str_name;
	m_buffer1+=" : ";
	m_buffer1+=m_edit1;
	m_buffer1+="\");";
//	m_buffer1="insert student("+itoa(4000+c,10)+m_edit1+")";
	mysql_query(mysql,m_buffer1);
	m_edit1.Empty();
	UpdateData(FALSE);
	c++;
}

void CScroll_testDlg::exchange(void)
{

}

void CScroll_testDlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
//	int t;
	UpdateData(TRUE);
	switch(nIDEvent)
	{
	case 1:
		m_edit22=m_edit21;
		m_edit21.Empty();
		mysql_query(mysql,ask);
		mysql_field_count(mysql);
		res=mysql_use_result(mysql);
		while(row=mysql_fetch_row(res))
		{
			if(row<0)break;
//			for(t=0;t<mysql_num_fields(res);t++)
//			{
				m_edit21+=row[1];
				m_edit21+="(";
				m_edit21+=row[0];
				m_edit21+=")";
//			}
			m_edit21+="\r\n";
		}

		if(!(m_edit22==m_edit21)||count)
		{
			m_edit2.SetWindowText(m_edit21);
			m_edit2.LineScroll(m_edit2.GetLineCount(),0);
			mysql_free_result(res);
			UpdateData(FALSE);
			count=0;
		}
		if(mysql_error(mysql))
		{
			m_edit21+=mysql_error(mysql);
		}
		break;
	default:
		;
	}

	CDialog::OnTimer(nIDEvent);
}




void CScroll_testDlg::OnDestroy() 
{
	CDialog::OnDestroy();
	mysql_close(mysql);
	// TODO: Add your message handler code here
	
}

void CScroll_testDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	mysql_query(mysql,"delete from student");
}

BOOL CScroll_testDlg::PreTranslateMessage(MSG* pMsg) 
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message==WM_KEYDOWN)
		if(pMsg->wParam==13)
			OnButton1();
	return CDialog::PreTranslateMessage(pMsg);
}

void CScroll_testDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	m_edit3.GetWindowText(str_name);
	m_edit3.SetReadOnly(TRUE);
	m_button3.EnableWindow(FALSE);
}

void CScroll_testDlg::OnButton4() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	c=0;
	m_edit5=m_edit4+c;
	UpdateData(FALSE);
}
