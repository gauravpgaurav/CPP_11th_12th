#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a[8],elt,i,pos=-1;
for (i=0;i<8;i++)
cin>>a[i];
cin>>elt;
for (i=0;i<8;i++)
{if (elt==a[i])
{pos=i+1;
break;
}}
 if(pos==-1)
{cout<<"No. doesn't exist"; }
else
{cout<<"position no. "<<pos;}
getch();}
