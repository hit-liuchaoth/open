// Sql_testView.cpp : implementation of the CSql_testView class
//

#include "stdafx.h"
#include "Sql_test.h"

#include "Sql_testDoc.h"
#include "Sql_testView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSql_testView

IMPLEMENT_DYNCREATE(CSql_testView, CView)

BEGIN_MESSAGE_MAP(CSql_testView, CView)
	//{{AFX_MSG_MAP(CSql_testView)
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
	ON_BN_CLICKED(ID_BUTTON1,OnB1)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSql_testView construction/destruction

CSql_testView::CSql_testView()
{
	// TODO: add construction code here

}

CSql_testView::~CSql_testView()
{
}

BOOL CSql_testView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSql_testView drawing

void CSql_testView::OnDraw(CDC* pDC)
{
	CSql_testDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CSql_testView printing

BOOL CSql_testView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSql_testView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSql_testView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CSql_testView diagnostics

#ifdef _DEBUG
void CSql_testView::AssertValid() const
{
	CView::AssertValid();
}

void CSql_testView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSql_testDoc* CSql_testView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSql_testDoc)));
	return (CSql_testDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSql_testView message handlers


int CSql_testView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	mysql=(MYSQL *)malloc(sizeof(MYSQL));////////////this is important!!
	mysql_init(mysql);
//	if(!mysql_real_connect(mysql,"joey890228.vicp.net","admin","password","new1",3306,NULL,0))
	if(!mysql_real_connect(mysql,"localhost","root","liyang123","test",3306,NULL,0))
	{
		//mydb为你所创建的数据库，3306为端口号，可自行设定
	AfxMessageBox(mysql_error(mysql));
	return FALSE;
	}
/*	
	m_b1.Create(_T(""),WS_CHILD|BS_ICON,
				CRect(50,50,100,100),
				this,ID_BUTTON1);
	m_b1.ShowWindow(SW_SHOW);
*/
	m_edit1.Create(ES_LEFT|ES_MULTILINE|ES_AUTOVSCROLL,CRect(20,20,200,100),
				this,ID_EDIT1);
	m_edit1.ShowWindow(SW_SHOW);
	m_edit1.ModifyStyle(   0,   ES_MULTILINE   |   ES_AUTOVSCROLL | WS_VSCROLL   |   WS_HSCROLL  );
	m_edit1.SetFocus();
	m_edit1.Paste();
	return 0;
}


void CSql_testView::OnB1(int nID)
{
	CString str;
	CClientDC dc(this);
	MYSQL_ROW row;
	MYSQL_RES *res;
	int t,count;
//	char *p="select * from student";
	char *p="select * from stu";
	count=0;
	mysql_query(mysql,p);
	mysql_field_count(mysql);
	res=mysql_use_result(mysql);
	while(row=mysql_fetch_row(res))
	{
		if(row<0)break;
		for(t=0;t<mysql_num_fields(res);t++)
		{
			dc.TextOut(200+t*50,200+count*20,row[t]);
		}
		count++;	
	}
	mysql_free_result(res);
	mysql_close(mysql);
}