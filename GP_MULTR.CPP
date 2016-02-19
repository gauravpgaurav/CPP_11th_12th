#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,i,j,k=1;
cin>>a>>b;
if (a<b)
{
for(i=a;i<=b;i++)
{
for(j=1;j<=5;j++)
{
k=i*j;
cout<<i<<"x"<<j<<"="<<k;
cout<<endl;
}
cout<<endl;}
}
else if (b<a)
{
for(i=b;i<=a;i++)
{
for(j=1;j<=5;j++)
{
k=i*j;
cout<<i<<"x"<<j<<"="<<k;
}
}
}
getch();
}

