#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int s,p,i,j,n;
s=0;
cin>>n;
for (i=1;i<=n;i++)
{ p=1;
for (j=1;j<=i;j++)
{p=p*i;
}
s=s+p;
}
cout<<s;
getch();
}