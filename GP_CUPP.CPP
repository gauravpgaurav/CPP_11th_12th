#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
char s[255];
int i;
cin>>s;
for(i=0;s[i]!='\0';i++)
{if(s[i]>='a')
{s[i]=s[i]-32;}
cout<<s[i];}
getch();}


