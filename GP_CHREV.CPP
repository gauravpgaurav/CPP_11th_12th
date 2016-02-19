#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
char a[255];
cin>>a;
int i,j;
for(i=0;a[i]!='\0';i++);
for(j=i-1;j>=0;j--)
cout<<a[j];
getch();}

