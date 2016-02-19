#include<iostream.h>
#include<conio.h>
void func(char[]);
void main()
{clrscr();
char a[80];
cin>>a;
func(a);}
void func( char f[80])
{int i=0;
while(f[i]!='\0')
{switch(f[i])
{
  case'a':
  case'e':
  case'i':
  case'o':
  case'u':cout<<f[i]<<" ";
	break;}
  i++;}
  getch();}