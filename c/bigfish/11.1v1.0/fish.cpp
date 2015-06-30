#include "stdafx.h"
#include "fish.h"
#include "Resource.h"
#include "math.h"
#include "bltbit_map.h"

void fish::Initial()
{
	int i,j;
	for(i=0;i<MAX_MOUNT;i++)
	{
		cpu[i].direction=0;
		cpu[i].pos.x=0;
		cpu[i].pos.y=0;
		cpu[i].level=0;
		cpu[i].enable=0;
		cpu[i].style.at=0;
		cpu[i].style.count=0;
		j=rand()%3;
		switch(j)
		{
		case 0:
			cpu[i].style.frame[0]=IDB_FISH_99;
			break;
		case 1:
			cpu[i].style.frame[0]=IDB_FISH_46;
			break;
		case 2:
			cpu[i].style.frame[0]=IDB_FISH_56;
			break;
		}
		
	}
	size[0].x=36;
	size[0].y=36;
	for(i=1;i<4;i++)
	{
		size[i].x=size[i-1].x+SIZE_UP;
		size[i].y=size[i-1].y+SIZE_UP;
	}
	player.pos.x=0;
	player.pos.y=0;
	player.direction=1;
	player.level=0;
	player.style.at=0;
	player.style.count=0;
	player.style.frame[0]=IDB_FISH_98;
	
	sc.x=GetSystemMetrics(SM_CXSCREEN);
	sc.y=GetSystemMetrics(SM_CYSCREEN);

	enable=1;
	srand(time(NULL));


}

void fish::ToRand()
{
	int i;
	int k;
	
	for(i=0;i<MAX_MOUNT;i++)
	{
		k=rand()%RATE;
		if(!cpu[i].enable&&k==0)
		{
			cpu[i].pos.y=rand()%(sc.y-DIFF_Y);
			cpu[i].direction=rand()%2;
			cpu[i].level=rand()%MAX_LEVEL;
			if(cpu[i].direction)
			{
				cpu[i].pos.x=0;
				cpu[i].speed=rand()%5+1;
			}
			else
			{
				cpu[i].pos.x=sc.x;
				cpu[i].speed=-rand()%5-1;
			}
			cpu[i].enable=1;
		}
	}
}

void fish::Update_pos(CPoint x)
{
	player.pos.x=x.x;
	player.pos.y=x.y;
}

void fish::Update_direction(int x)
{
	if(x>0)
		player.direction=1;
	else if(x<0)
		player.direction=0;
}



void fish::ToDraw(CDC *pDC)
{
	int i;
	if(enable)
	{
		for(i=0;i<MAX_MOUNT;i++)
		{
			cpu[i].pos.x+=cpu[i].speed;
			if(cpu[i].pos.x>sc.x||cpu[i].pos.x<0)
			{
				cpu[i].enable=0;
			}
		}
	}
	todrawback(pDC,IDB_BACK);
	Draw_cpu(pDC);
	if(enable)
		Draw_player(pDC);
}


void fish::ToCheck()
{
	int i;
	for(i=0;i<MAX_MOUNT;i++)
	{
		if(ToCheck1(player.pos,cpu[i].pos,player.direction,cpu[i].direction,player.level,cpu[i].level))			
		{
			if(cpu[i].level<=player.level)
				cpu[i].enable=0;
		}
		if(ToCheck1(cpu[i].pos,player.pos,cpu[i].direction,player.direction,cpu[i].level,player.level))			
		{
			if(cpu[i].level>player.level)
			{ 
				 enable=0;
				 break; 
			}
		}
	}
}

int fish::ToCheck1(CPoint p1,CPoint p2,bool dir1,bool dir2,int lev1,int lev2)
{
	int diff_x,diff_y;
	int temp1,temp2;
	temp1=int(size[lev1].y)/2;
	temp2=int(size[lev2].y)/2;
	if(dir1)
	{
		diff_x=p1.x+size[lev1].x-p2.x;
	}
	else
	{
		diff_x=p2.x+size[lev2].x-p1.x;
	}

	
	if((p1.y+temp1)>(p2.y+temp2))
	{
		diff_y=p1.y+temp1-p2.y-temp2;
	}
	else
	{
		diff_y=p2.y+temp2-p1.y-temp1;
	}
	if(diff_x>=0&&diff_x<=15&&diff_y<=15)
		return 1;
	return 0;
}

void fish::Draw_cpu(CDC *pDC)
{
	int i;
	for(i=0;i<MAX_MOUNT;i++)
	{
		if(cpu[i].enable)
		{
			todraw(pDC,cpu[i]);
		}
	}
}


void fish::Draw_player(CDC *pDC)
{
	todraw(pDC,player);
	/*
	if(player.style.count==FRAME_RATE)
	{
		player.style.count=0;

		if(player.style.at<(MAX_FRAME-1))
			player.style.at++;
		else
			player.style.at=0;
	}
	player.style.count++;
	*/
}


void fish::todraw(CDC *pDC,fish_data d)
{
	CDC temp1,mask_dc;
	CBitmap bit,mask_bit;
	BITMAP bit_info;
	bit.LoadBitmap(d.style.frame[d.style.at]);
	bit.GetBitmap(&bit_info);
	temp1.CreateCompatibleDC(pDC);
	mask_dc.CreateCompatibleDC(pDC);
	mask_bit.CreateBitmap(bit_info.bmWidth,bit_info.bmHeight,1,1,NULL);
	CBitmap *pOld1=mask_dc.SelectObject(&mask_bit);
	CBitmap *pOld=temp1.SelectObject(&bit);
	COLORREF l_crOldBack=temp1.SetBkColor(RGB(255,255,255));
	if(d.direction)
	{
		mask_dc.StretchBlt(0,0,bit_info.bmWidth,bit_info.bmHeight,&temp1,0,0,bit_info.bmWidth,bit_info.bmHeight,SRCCOPY);
		pDC->StretchBlt(d.pos.x,d.pos.y,size[d.level].x,size[d.level].y,&temp1,0,0,bit_info.bmWidth,bit_info.bmHeight,SRCINVERT);
		pDC->StretchBlt(d.pos.x,d.pos.y,size[d.level].x,size[d.level].y,&mask_dc,0,0,bit_info.bmWidth,bit_info.bmHeight,SRCAND);
		pDC->StretchBlt(d.pos.x,d.pos.y,size[d.level].x,size[d.level].y,&temp1,0,0,bit_info.bmWidth,bit_info.bmHeight,SRCINVERT);
	}
	else
	{
		mask_dc.StretchBlt(0,0,bit_info.bmWidth,bit_info.bmHeight,&temp1,bit_info.bmWidth-1,0,-bit_info.bmWidth,bit_info.bmHeight,SRCCOPY);
		pDC->StretchBlt(d.pos.x,d.pos.y,size[d.level].x,size[d.level].y,&temp1,bit_info.bmWidth-1,0,-bit_info.bmWidth,bit_info.bmHeight,SRCINVERT);
		pDC->StretchBlt(d.pos.x,d.pos.y,size[d.level].x,size[d.level].y,&mask_dc,0,0,bit_info.bmWidth,bit_info.bmHeight,SRCAND);
		pDC->StretchBlt(d.pos.x,d.pos.y,size[d.level].x,size[d.level].y,&temp1,bit_info.bmWidth-1,0,-bit_info.bmWidth,bit_info.bmHeight,SRCINVERT);
	}
	temp1.SelectObject(pOld);
	bit.DeleteObject();
	mask_bit.DeleteObject();
	temp1.DeleteDC();
	mask_dc.DeleteDC();

}

void fish::todrawback(CDC *pDC,int nID)
{
	CDC temp;
	CBitmap bit;
	BITMAP bit_info;
	bit.LoadBitmap(nID);
	bit.GetBitmap(&bit_info);
	temp.CreateCompatibleDC(pDC);
	CBitmap *pOld=temp.SelectObject(&bit);
	pDC->StretchBlt(0,0,sc.x,sc.y,&temp,0,0,bit_info.bmWidth,bit_info.bmHeight,SRCCOPY);
	temp.SelectObject(pOld);
	temp.DeleteDC();
	bit.DeleteObject();
}