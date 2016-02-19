#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int y,m;
cout<<"Enter year"<<endl;
cin>>y;
cout<<"Enter month number"<<endl;
cin>>m;
switch(m)
{case 1:
case 3:
case 5:
case 8:
case 10:
case 12: cout<<"31 Days";
break;
case 4:
case 6:
case 9:
case 11: cout<<"30 Days";
break;
case 2: if (((y%4==0)&&(y%100!=0))||(y%400==0))
{cout<<"29 Days";}
else
{cout<<"28 Days";}
break;
default: cout<<"Invalid number";}
getch();
}