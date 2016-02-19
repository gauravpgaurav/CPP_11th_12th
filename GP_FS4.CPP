#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
float sum=0,a;
int i,s=1;
for(i=1;i<=10;i++)
{a=i;
sum=sum+(s*1)/a;
s=s*(-1);}
cout<<sum;
getch();}