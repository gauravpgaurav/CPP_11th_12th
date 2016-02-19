#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,b,i;
cin>>a>>b;

if (a<b)
{
	for (i=a;i<=b;i++)
	{
		if (i%2!=0)
		cout<<sqrt(i)<<" ";
	}
}
if (a>b)
	{
	for (i=b;i>=a;i++)
	{
	if (i%2!=0)
	cout<<sqrt(i)<<" ";
	}
	}
getch();
}
