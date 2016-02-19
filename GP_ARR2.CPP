#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int i,a[7],o[7],e[7],ne=0,no=0;
for(i=0;i<7;i++)
{cin>>a[i];}
for (i=0;i<7;i++)
{if (a[i]%2==0)
{e[ne]=a[i];
ne++;}
else
{o[no]=a[i];
no++;}
}
cout<<"Number of Even nos.="<<ne<<endl<<"They were:";
for(i=0;i<ne;i++)
{cout<<endl<<e[i];}
cout<<endl<<"Number of Odd nos.="<<no<<endl<<"They were:";
for(i=0;i<no;i++)
{cout<<endl<<o[i];}
getch();}
