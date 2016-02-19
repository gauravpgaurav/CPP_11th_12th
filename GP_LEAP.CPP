#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int y;
cout<<"Enter year"<<endl;
cin>>y;
if (((y%4==0)&&(y%100!=0))||(y%400==0))
{cout<<"Leap Year";}
else
{cout<<"Not a leap year";}
getch();
}