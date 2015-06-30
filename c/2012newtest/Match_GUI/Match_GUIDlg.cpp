// Match_GUIDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Match_GUI.h"
#include "Match_GUIDlg.h"

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
// CMatch_GUIDlg dialog

CMatch_GUIDlg::CMatch_GUIDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMatch_GUIDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMatch_GUIDlg)
	m_id = 0;
	m_display = _T("");
	m_weight_g = 0;
	m_hight_g = 0;
	m_hight_w = 0;
	m_weight_w = 0;
	m_name = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMatch_GUIDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMatch_GUIDlg)
	DDX_Text(pDX, IDC_EDIT1, m_id);
	DDX_Text(pDX, IDC_EDIT5, m_display);
	DDX_Text(pDX, IDC_EDIT6, m_weight_g);
	DDX_Text(pDX, IDC_EDIT3, m_hight_g);
	DDX_Text(pDX, IDC_EDIT4, m_hight_w);
	DDX_Text(pDX, IDC_EDIT7, m_weight_w);
	DDX_Text(pDX, IDC_EDIT2, m_name);
	DDV_MaxChars(pDX, m_name, 8);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMatch_GUIDlg, CDialog)
	//{{AFX_MSG_MAP(CMatch_GUIDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMatch_GUIDlg message handlers

BOOL CMatch_GUIDlg::OnInitDialog()
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
	





	match_data.init();
	UpdateData(FALSE);


	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMatch_GUIDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CMatch_GUIDlg::OnPaint() 
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
HCURSOR CMatch_GUIDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMatch_GUIDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	int need=1;
	int ret;
	char tmp[MAX_NAME];
	char name[MAX_NAME];
	UpdateData(TRUE);
	strcpy(name,m_name);
	if(m_weight_w==0&&m_hight_w==0)need=0;
	ret=match_data.insert(m_id,name,m_hight_g,m_weight_g,need,m_hight_w,m_weight_w);
	
	if(ret)
	{
		MessageBox("此人数据已经存在");
	}
	else
	{

		itoa(m_id,tmp,10);
		m_display+=tmp ;
		m_display+= "\t";
		m_display+=name;
		m_display+= "\t\t" ;
		itoa(m_hight_g,tmp,10);
		m_display+=tmp ;
		m_display+= "\t";
		itoa(m_weight_g,tmp,10);
		m_display+=tmp ;
		m_display+= "\t\t";

		itoa(m_hight_w,tmp,10);
		m_display+=tmp ;
		m_display+= "\t";
		itoa(m_weight_w,tmp,10);
		m_display+=tmp ;
		m_display+= "\r\n";

		UpdateData(FALSE);
	}
	GetDlgItem(IDC_EDIT1)->SetFocus(); 
}

void CMatch_GUIDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	char tmp[MAX_NAME];
	match_data.to_find();
	m_display.Empty();
	m_display=*match_data.get_result();
	UpdateData(FALSE);
}

void CMatch_GUIDlg::OnButton6() 
{
	// TODO: Add your control notification handler code here
	char tmp[8]="\0";
	deletename cm;
	cm.get(tmp);
	cm.DoModal();

	if(*tmp!='\0')
	{
		match_data.de_insert(tmp);
	}
	else
	{
		MessageBox("没有匹配的人");
	}
	match_data.to_find();
	m_display=*match_data.get_result();
	UpdateData(FALSE);
}

void CMatch_GUIDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	match_data.save();
	MessageBox("保存成功");
}

void CMatch_GUIDlg::OnButton4() 
{
	// TODO: Add your control notification handler code here
	match_data.restore();
	match_data.to_find();
	m_display=*match_data.get_result();
	UpdateData(FALSE);
}



BOOL CMatch_GUIDlg::PreTranslateMessage(MSG* pMsg) 
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message==WM_KEYDOWN&&pMsg->wParam==VK_RETURN)
	{
		OnButton1() ;
		return TRUE;
	}

	return CDialog::PreTranslateMessage(pMsg);
}
