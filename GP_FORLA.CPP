#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a,b,l,i;
cout<<"Enter 1 no.";
cin>>a;
l=a;
for (i=2;i<11;i++)
{
cout<<"Enter "<<i<<" no.";
cin>>a;

if (a>l)
l=a;
}
cout<<"Largest no. is "<<l;
getch();
}

