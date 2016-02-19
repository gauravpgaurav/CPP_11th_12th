#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int i,j,a[4][5],avg[4],sum,csum=0,av;
for(i=0;i<4;i++)
{cout<<"Enter marks of student no.:"<<i+1<<endl;
for(j=0;j<5;j++)
{cout<<"For subject no. "<<j+1<<":";
cin>>a[i][j];}
}
for(i=0;i<4;i++)
{sum=0;
for(j=0;j<5;j++)
{sum=sum+a[i][j];}
avg[i]=sum/5;
}

for(i=0;i<4;i++)
{cout<<"Average of student "<<i+1<<":"<<avg[i]<<endl;}
for(i=0;i<4;i++)
{sum=0;
for(j=0;j<5;j++)
{csum=csum+a[i][j];}}
av=csum/20;
cout<<"Class average:"<<av;
getch();}