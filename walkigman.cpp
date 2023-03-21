#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>


using namespace std; 
main()
{

	
	int gd = DETECT,gm,x,y;
	initgraph(&gd,&gm,"F:\\dev-C++\\Dev-Cpp\\bgi");
	for(int i=0;i<1000;i+=5)
	{
		
		//rain
		x=getmaxx();
		y=getmaxy();
		for(int i=0;i<270;i++)
	{
		outtextxy(rand()%x,rand()%y-50,":");

	}
	
	//road
		line(20,700,1500,700);
		
	 //man 1
	if(i<=590)
	{
	
	if(i%2==0)
	{ 
	//hand
	line(135+i,520,105+i,595);
	//leg 
	line(100+i,700,135+i,630);
	line(170+i,700,135+i,630);
}
	else
	{	
	//leg
	line(135+i,630,135+i,700);
	
	}
	
	//hand 
	line(135+i,520,170+i,595);
	
	//face
	circle(135+i,495,25);
	
	//chest
	line(135+i,520,135+i,630);
		
	//umberla
	line(85+i,440,255+i,440);
	
	ellipse(170+i,440,0,180,85,40);
	
	
	line(170+i,595,170+i,440);
	arc(160+i,595,180,360,10);
	}
	
	
	//stop man 1
	if(i>590&&i<=680)
	{
		//hand
	line(725,520,695,595);
	//leg 
	line(690,700,725,630);
	line(760,700,725,630);
	
	//hand 
	line(725,520,760,595);
	
	//face
	circle(725,495,25);
	
	//chest
	line(725,520,725,630);
	
	//umberla
	line(675,440,845,440);
	ellipse(760,440,0,180,85,40);
	line(760,595,760,440);
	arc(750,595,180,360,10);
	}
	
	if(i<=680)
	{
	
	//man 2
	circle(820,495,25);
	
	//chest
	ellipse(820,575,0,360,15,55);
	
	//skirt
	line(808,610,780,660);
	line(832,610,860,660);
	line(780,660,860,660);
	
	
	
	//leg
	line(808,660,808,700);
	line(832,660,832,700);
	
	
	//hand
	line(806,550,790,600);
	line(832,550,850,600);
	
	}
	
	if(i>=680)
	{
		int j=i-680;
		//man 2
	circle(820+j,495,25);
	
	//chest
	ellipse(820+j,575,0,360,15,55);
	
	//skirt
	line(808+j,610,780+j,660);
	line(832+j,610,860+j,660);
	line(780+j,660,860+j,660);
	
	//man 1
	
	
	
	//hand 
	line(725+j,520,760+j,595);
	
	//face
	circle(725+j,495,25);
	
	//chest
	line(725+j,520,725+j,630);
	
	//umberla
	line(675+j,440,845+j,440);
	ellipse(760+j,440,0,180,85,40);
	line(760+j,595,760+j,440);
	arc(750+j,595,180,360,10);
	
	if(j%2==0)
	{
	
	//leg
	line(808+j,660,808+j,700);
	line(832+j,660,832+j,700);
	
	//hand
	line(806+j,550,790+j,600);
	line(832+j,550,850+j,600);
	
	//man 2
		//hand
	line(725+j,520,695+j,595);
	//leg 
	line(690+j,700,725+j,630);
	line(760+j,700,725+j,630);
	}
	else
	{
		line(820+j,660,820+j,700);
		line(725+j,630,725+j,700);
	}
	}
	
	//lamp
	line(730,250,730,700);
	line(730,250,820,215);
	setcolor(8);
	setfillstyle(1,8);
	rectangle(600,345,930,375);
	floodfill(601,346,8);
	setcolor(14);
	setfillstyle(1,14);
	ellipse(855,205,0,360,45,25);
	floodfill(855,205,14);
	setcolor(15);
	
	delay(200);
	cleardevice();
}
	
	getch();
	}

