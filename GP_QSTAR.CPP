#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int i,j,n;
char c;
cin>>n;
for (i=1;i<=n;i++)
{cout<<"*";
for (j=1;j<=i;j++)
{cout<<"?";
}
if(i==0)
cout<<endl;
else
cout<<"*"<<endl;
}
getch();}