#include<iostream.h>
#include<conio.h>
int power(int,int);
void main()
{clrscr();
int m,n,o;
cin>>m>>n;
o=power(m,n);
cout<<o;
getch();}
int power(int a,int b)
{int i,j=1;
for(i=1;i<=b;i++)
{j=a*j;}
return j;
}

