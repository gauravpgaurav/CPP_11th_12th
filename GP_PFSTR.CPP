#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
char a[255];
int i,j,v=0;
cin>>a;
for(i=0;a[i]!='\0';i++)
{switch(a[i])
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':v++;}
cout<<"No. of characters: "<<i<<endl<<"No.of vowels: "<<v<<endl<<"Reverse:";
for(j=i;j>=0;j--)
{cout<<a[j];}
getch();}
