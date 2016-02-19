#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a,b,m=1;
cout<<"Enter number:"<<endl;
cin>>a;
do
{b=a%10;
m=m*b;
a=a/10;}
while (a>0);
cout<<"The product of the digits is "<<m;
getch();}