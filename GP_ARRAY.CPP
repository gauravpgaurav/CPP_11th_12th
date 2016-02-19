#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a[5],i=0,p=1;
for(i=0;i<5;i++)
{cin>>a[i];}
for(i=0;i<5;i++)
{p=p*a[i];}
for(i=0;i<5;i++)
{cout<<a[i]<<"x";}
cout<<"= "<<p;
getch();
}