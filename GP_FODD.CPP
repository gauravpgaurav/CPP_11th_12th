#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
float sum=0,a;
int i,s=1;
for(i=1;i<=20;i=i+2)
{a=i;
sum=sum+a*s;
s=s*(-1);}
cout<<sum;
getch();}