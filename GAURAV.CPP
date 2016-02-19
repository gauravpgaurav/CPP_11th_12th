#include <graphics.h>
#include<dos.h>
#include <stdio.h>
#include <conio.h>
void basket();
void main()
{   int s=0;
   /* request auto detection */
   int gdriver = DETECT, gmode;
   int midx, midy,mida,midb,a,b;
   int radius =15;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   /* read result of initialization */
   setcolor(60);
   mida=getmaxx()/2;
   midb=getmaxy()/2;
   settextstyle(1,0,6) ;
   outtextxy( (mida-100),(midb-60),"iBOUNCE");
    settextstyle(2,0,6);
   outtextxy((mida-110),(midb),"<press any key to begin>");
   setcolor(15);
   settextstyle(4,0,4);
   outtextxy((mida-200),(midb+200),"By- Gaurav Pant & Joel Jose");
   getch();
   cleardevice();
     settextstyle(2,0,6);
   outtext("OBJECTIVE:- Pass ball through basket <Press Esc twice to exit>");
    settextstyle(4,0,4);
   outtextxy(mida,midb,"Choose level:-");
    setcolor(2);
   outtextxy(mida,midb+60,"Easy(e)");
    setcolor(14);
   outtextxy(mida,midb+120,"Medium(m)");
    setcolor(12);
   outtextxy(mida,midb+180,"Hard(h)");
   char c=getch();
   switch(c)
	{case 'e':a=2 ;
	break;
	 case 'm':a=1 ;
	break;
	 case 'h':a=0;
	break;}
	cleardevice();
   char ch='u';
   int x=45,y=50;
   while(ch!=27)
   {
	setcolor(0);
	circle(x,y,radius);
	if(kbhit()!=0)
		{
		ch=getch();
		}
//   else
 //  {
  //	y+=2;
 //  }
   switch(ch)
	{
	case 'w':y-=1;break;
	case 's':y+=1;break;
	case 'd':x+=1;break;
	case 'a':x-=1;break;
     //	case 't':while(kbhit());break;
	}
   setcolor(12);
   circle(x,y,radius);
   delay(a);
  if(x==622||x==17||y==17||y==460)
	{
	switch(ch)
		{ case 'w':ch='s';break;
		case 's':ch='w';break;
		case 'a':ch='d';break;
		case 'd':ch='a';break;

		}
	 }
  char score[8];
  if((x>=518)&&(y==100)&&(x<=598))
{
  

  setcolor(0);
  outtextxy(311,15,score);
  s++;
  sprintf(score,"Score:%d",s);
  setcolor(12);
  outtextxy(311,15,score);
}
   rectangle(2,2,638,475);
   basket();

  }

    /* clean up */
   getch();
   closegraph();

}
void basket()
{

   int midx, midy;
   int stangle = 0, endangle = 360;
   int xradius = 40, yradius = 20;
   midx = 558;
   midy = 100;
   setcolor(getmaxcolor());
   ellipse(midx, midy, stangle, endangle,
	   xradius, yradius);
}

