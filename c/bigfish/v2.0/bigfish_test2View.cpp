// bigfish_test2View.cpp : implementation of the CBigfish_test2View class
//

#include "stdafx.h"
#include "bigfish_test2.h"

#include "bigfish_test2Doc.h"
#include "bigfish_test2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test2View

IMPLEMENT_DYNCREATE(CBigfish_test2View, CView)

BEGIN_MESSAGE_MAP(CBigfish_test2View, CView)
	//{{AFX_MSG_MAP(CBigfish_test2View)
	ON_WM_TIMER()
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test2View construction/destruction

CBigfish_test2View::CBigfish_test2View()
{
	// TODO: add construction code here

}

CBigfish_test2View::~CBigfish_test2View()
{
}

BOOL CBigfish_test2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs
	po.x=GetSystemMetrics(SM_CXSCREEN)/2-50;
	po.y=GetSystemMetrics(SM_CYSCREEN)/2-50;
	m_edit1=0;
	m_edit2=0;
	m_edit3=0;
	m_edit4=0;
	m_edit5=0;
	m_edit6=0;

	sc.x=GetSystemMetrics(SM_CXSCREEN);
	sc.y=GetSystemMetrics(SM_CYSCREEN);
	fish1.Initial();
	
	flag=1;
	
	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test2View drawing

void CBigfish_test2View::OnDraw(CDC* pDC)
{
	CBigfish_test2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);


	int nWidth,nHeight;
nWidth=sc.x;
nHeight=sc.y;
CDC MemDC; //首先定义一个显示设备对象 
CBitmap MemBitmap;//定义一个位图对象
//随后建立与屏幕显示兼容的内存显示设备
MemDC.CreateCompatibleDC(NULL);
//这时还不能绘图，因为没有地方画 ^_^
//下面建立一个与屏幕显示兼容的位图，至于位图的大小嘛，
//可以用窗口的大小，也可以自己定义（如：有滚动条时就要大于当前窗口的大小，
//在BitBlt时决定拷贝内存的哪部分到屏幕上）


//MemBitmap.CreateCompatibleBitmap(pDC,nWidth,nHeight);
MemBitmap.CreateCompatibleBitmap(pDC,nWidth,nHeight);

//将位图选入到内存显示设备中
//只有选入了位图的内存显示设备才有地方绘图，画到指定的位图上
CBitmap *pOldBit=MemDC.SelectObject(&MemBitmap);
//先用背景色将位图清除干净，这里我用的是白色作为背景
//你也可以用自己应该用的颜色
MemDC.FillSolidRect(0,0,nWidth,nHeight,RGB(255,255,255));



//绘图///////////////////////////////////////////////////////


	fish1.Update_direction(m_edit5);
	fish1.Update_pos(po);
	fish1.ToRand();
	fish1.ToCheck();
	fish1.ToDraw(&MemDC);

	if(!fish1.enable&&flag)
	{
		flag=0;
		AfxMessageBox("惨了，你被大鱼吃了");	
	}

//////////////////////////////////////////////////////////////


//将内存中的图拷贝到屏幕上进行显示
pDC->BitBlt(0,0,nWidth,nHeight,&MemDC,0,0,SRCCOPY);
//绘图完成后的清理
//把前面的pOldBit选回来.在删除MemBitmap之前要先从设备中移除它
MemDC.SelectObject(pOldBit);
MemBitmap.DeleteObject();
MemDC.DeleteDC();




	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test2View diagnostics

#ifdef _DEBUG
void CBigfish_test2View::AssertValid() const
{
	CView::AssertValid();
}

void CBigfish_test2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBigfish_test2Doc* CBigfish_test2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBigfish_test2Doc)));
	return (CBigfish_test2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBigfish_test2View message handlers


void CBigfish_test2View::ToPaint()
{


}

BOOL CBigfish_test2View::PreTranslateMessage(MSG* pMsg) 
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
	
	return CView::PreTranslateMessage(pMsg);
}

void CBigfish_test2View::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	CDC *pDC=GetDC(); 
	
	switch(nIDEvent)
	{
	case 1:
		if((m_edit1==1&&m_edit3==0))
		{
			if(m_edit5>(-10))
				m_edit5--;
		}
		if((m_edit1==0&&m_edit3==1))
		{
			if(m_edit5<10)
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
			if(m_edit6>(-10))
				m_edit6--;
		}
		if((m_edit4==0&&m_edit2==1))
		{
			if(m_edit6<10)
				m_edit6++;
		}
		if(m_edit4==1&&m_edit2==1||(m_edit4==0&&m_edit2==0))
		{
			if(m_edit6>0)
				m_edit6--;
			else if(m_edit6<0)
				m_edit6++;
		}

		//////////////////////////////////////////////////////////////////////
		if((po.x>5&&m_edit5<0)||(po.x<(sc.x-PLAYER_SIZE_X)&&m_edit5>0))
			po.x+=m_edit5;

		if((po.y>45&&m_edit6>0)||(po.y<(sc.y-PLAYER_SIZE_Y)&&m_edit6<0))
			po.y-=m_edit6;
		///////////////////////////////////////////////////////////////////////
		UpdateData(FALSE);
		OnDraw(pDC);
		break;
	}
	CView::OnTimer(nIDEvent);
}

int CBigfish_test2View::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	SetTimer(1,50,NULL);
	// TODO: Add your specialized creation code here
	
	return 0;
}
