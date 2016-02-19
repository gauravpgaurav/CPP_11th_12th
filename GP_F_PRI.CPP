#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int p,n,i;
p=0;
cin>>n;
for (i=2;i<n/2;i++)
{if (n%i==0)
	{p=1;
	break;}}
if (p==0)
	{cout<<"Prime";}
if (p==1)
	{cout<<"Composite";}
getch();
}
