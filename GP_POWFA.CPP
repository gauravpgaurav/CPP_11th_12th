#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
float n,s=0,p,b=1;
int i,j;
float fac=1;
cout<<"Enter no."<<endl;
cin>>n;
for(i=1;i<=n;i++)
{p=1;
fac= fac*i;
for (j=1;j<=i;j++)
{p=p*i;
}
s=s+((p/fac)*b);
b=b*(-1);
}
cout<<s;
getch();}

