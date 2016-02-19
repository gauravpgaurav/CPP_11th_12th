#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int i,j,k,n;
char c;
cin>>n;

for (i=1;i<=n;i++)

	{c='A';

	for (j=n-1;j>=i;j--)
		{cout<<" ";}

	for(k=1;k<=(2*i)-1;k++)
		{cout<<c;
		c++;}

	cout<<endl;
	}

getch();}