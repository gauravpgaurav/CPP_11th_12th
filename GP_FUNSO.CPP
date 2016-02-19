#include<iostream.h>
#include<conio.h>
void sort(int []);
void main()
{clrscr();
int a[5],i;
for(i=0;i<5;i++)
cin>>a[i];
sort(a);
}
void sort(int b[5])
{
int i,j ,k,t,small,pos;
for(i=0;i<5;i++)
{small=b[i];
pos=i;
for(j=i+1;j<5;j++)
{if(small>b[j])
{pos=j;
small=b[j];
}
}

t=b[i];
b[i]=small;
b[pos]=t;
}
for(k=0;k<5;k++)
{cout<<b[k]<<" ";}
getch();
}