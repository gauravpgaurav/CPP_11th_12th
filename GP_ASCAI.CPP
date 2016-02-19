#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a;
char ch;
do
{ch=getch();
a=ch;
cout<<ch<<"     "<<a<<endl;
} while (a!=27);
getch();
}