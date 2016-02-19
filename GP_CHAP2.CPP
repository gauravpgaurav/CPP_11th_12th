#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int i,j,f=0;
char rev[20],org[20];
cin>>org;
for(i=0;org[i]!='\0';i++);
for(j=0,i=i-1;i>=0;i--,j++)
	{rev[j]=org[i];}

rev[j]='\0';
cout<<rev<<endl;

for (i=0;i<=j;i++)
	if (org[i]!=rev[i])
	{f=1;
	break;}
if (f==0)
	{cout<<"Palindrome";}
else
	{cout<<"Not a palindrome";}

getch();}

