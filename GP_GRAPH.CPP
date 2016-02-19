#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{clrscr();
int i,j;
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
    i=getmaxcolor();

 for(j=0;j<=i;j++)
 {int u=rand()%547;
 int e=rand()%638  ;

  setbkcolor(u);

  delay(20);
 setcolor(e);

 moveto(u,e);
 outtext("Ipod touch 4g");}
 getch();
}