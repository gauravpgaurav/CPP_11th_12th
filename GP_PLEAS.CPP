

#include <graphics.h>
#include<dos.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int score();
void basket();
void main()
{
   /* request auto detection */
   int gdriver = DETECT, gmode;
   int midx, midy,mida,midb,a;
   int radius =15;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   /* read result of initialization */
   setcolor(60);
   mida=getmaxx()/2;
   midb=getmaxy()/2;
   settextstyle(1,0,6) ;
   outtextxy( mida,midb,"iBOUNCE");
   settextstyle(1,0,1);
   outtextxy(mida,(midb-1),"<press any key to begin >");
   setcolor(15);
   outtextxy(mida,(midb-20),"By- Gaurav Pant & Joel Jose");
   delay(20);

   getch();
   delay(20);
   outtext("OBJECTIVE:- Pass ball through basket");
   outtextxy(mida,midb,"Choose level:-");
   outtextxy(mida,midb+2,"Easy(e)");
   outtextxy(mida,midb+3,"Medium(m)");
   outtextxy(mida,midb+4,"Hard(h)");
   char c=getch();
   switch(c)
   {case 'e':a=2 ;
	break;
   case 'm':a=1 ;
	break;
   case 'h':a=0;
	break;}
	getch();
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
  }floodfill(x,y,12);
  int s=score(x,y);
  cout<<s;
   setcolor(15);
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
void score(int x,int y)
{ int s=0;
if ((x=558)&&(y=100))
{s++;}
return s;}
