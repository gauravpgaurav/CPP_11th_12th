#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int k,i,j,f=0;
char org[20];
cin>>org;
for(i=0;org[i]!='\0';i++);
for(j=i-1,k=0;k<=i/2;k++,j--)
{if(org[j]!=org[k])
	{f=1;
	break;}
}
if(f==0)
cout<<"Palindrome";
else
cout<<"Not a palindrome";
getch();
}