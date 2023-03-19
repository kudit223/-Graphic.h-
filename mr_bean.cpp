#include<iostream>
#include<graphics.h>
main()
{
	initwindow(1300,500);
		
	
	
for(int i=0;i<130;i++)
{
	
	//text
	settextstyle(6,4,2);
	outtextxy(750,100,"Harsh's BMW comming soon");
	outtextxy(650,130,"#MotivatedBoy");
	settextstyle(3,4,1);
	outtextxy(1070+2*i,270,"*Le Me");
	
    //emoji
    //face
    setcolor(14);
    setfillstyle(1,14);
    circle(800,100,40);
    floodfill(800,100,14);
    
    //eye
    setcolor(15);
    setfillstyle(1,15);
    circle(785,90,10);
    circle(815,90,10);
    floodfill(785,90,15);
    floodfill(815,90,15);
    
    //black eye part
    setcolor(0);
    setfillstyle(1,0);
    circle(785,94,6);
    circle(815,94,6);
    floodfill(785,94,0);
    floodfill(815,94,0);
    
    
    
    //smile
    setcolor(15);
    setfillstyle(1,15);
    rectangle(778,115,820,120);
    floodfill(779,116,15);
    
    
   
    setcolor(15);

	
	
	
	
	
	//road
	line(20,400,1480,400);
	
	// wheel
	circle(105+4*i,380,20);
	circle(240+4*i,380,20);
	
	//whell line
	line(103+4*i,380,103+4*i,400);
	line(240+4*i,380,240+4*i,400);
	
	//90 at right
	if(i%2==0)
	{
	line(103+4*i,380,92+4*i,363);
	line(103+4*i,380,123+4*i,380);
	line(240+4*i,380,230+4*i,363);
	line(258+4*i,380,240+4*i,380);
	
	
    }
	
	//90 at left
	else
	{
	line(85+4*i,380,103+4*i,380);
	line(113+4*i,363,103+4*i,380);
	line(221+4*i,380,240+4*i,380);
	line(246+4*i,363,240+4*i,380);
    }

	
	//bottom line
	line(125+4*i,380,220+4*i,380);
	line(75+4*i,380,85+4*i,380);
	line(260+4*i,380,270+4*i,380);
	line(65+4*i,380,75+4*i,380);
	line(270+4*i,380,320+4*i,380);
	
	//left line
	line(65+4*i,380,65+4*i,335);
	line(65+4*i,335,75+4*i,325);
	line(75+4*i,325,85+4*i,295);
	
	//right line
	line(320+4*i,380,320+4*i,335);
	line(260+4*i,335,320+4*i,335);
	line(240+4*i,295,260+4*i,335);
	line(85+4*i,295,240+4*i,295);
	line(260+4*i,335,270+4*i,325);
	line(250+4*i,285,270+4*i,325);
	line(330+4*i,325,320+4*i,335);
	line(320+4*i,380,330+4*i,370);
	line(330+4*i,370,330+4*i,325);
	
	//upper line
	line(85+4*i,295,95+4*i,285);
	line(95+4*i,285,250+4*i,285);
	line(240+4*i,295,250+4*i,285);	
	line(270+4*i,325,330+4*i,325);
	
	//window
	line(85+4*i,335,245+4*i,335);
	line(95+4*i,305,230+4*i,305);
	line(230+4*i,305,245+4*i,335);
	line(95+4*i,305,85+4*i,335);
	rectangle(165+4*i,305,170+4*i,335);
	
	
	
	
	//ellipse
	ellipse(105+4*i,380,0,180,30,35);
	ellipse(240+4*i,380,0,180,30,35);
	
	//traffic light
	
	//bottom
	line(895,310,895,400);
	
	//upper
	setfillstyle(SOLID_FILL,9);
	rectangle(880,220,910,310);
	floodfill(881,221,WHITE);
	
	
	//lights
	
	circle(895,235,15);
	circle(895,265,15);
	circle(895,295,15);
	
	//lightcolor
	if(i>=0&&i<90)
	{
		//green
		setfillstyle(1,2);
		floodfill(895,295,15);
		//yellow but black
		setfillstyle(1,0);
		floodfill(895,265,15);
		//red but black
		setfillstyle(1,0);
		floodfill(895,235,15);
	}
	
	if(i>=90&&i<115)
	{
		//yellow
		setfillstyle(1,14);
		floodfill(895,265,15);
		//red but black
		setfillstyle(1,0);
		floodfill(895,235,15);
		//green but black
		setfillstyle(1,0);
		floodfill(895,295,15);
		
	}
	
	if(i>=115&&i<130)
	{
		//red
		setfillstyle(1,4);
		floodfill(895,235,15);
		//green but black
		setfillstyle(1,0);
		floodfill(895,295,15);
		//yellow but black
		setfillstyle(1,0);
		floodfill(895,265,15);
		
	}
	
	
	
	
	//man
	
	//face
	ellipse(1050+2*i,300,0,360,15,20);
	
	//middle part
	line(1050+2*i,320,1050+2*i,370);
	
	if(i%2!=0)
	{
		//legs
	line(1050+2*i,370,1030+2*i,400);
	line(1050+2*i,370,1070+2*i,400);
	delay(100);
    }
    else
	{
		//legs
	line(1050+2*i,370,1050+2*i,400);
	
	//arm
	line(1050+2*i,330,1040+2*i,360);
	line(1050+2*i,330,1060+2*i,360);
	
	delay(100);
	
	}
	
	cleardevice();	

}
    getch();
}
