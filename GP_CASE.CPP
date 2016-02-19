#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
char a;
cin >> a;
if ((a>='A')&&(a<='Z'))
{cout << "Upper case";}
else if ((a>='a') & (a<='z'))
{cout << "Lower case";}
else if ((a>='0') & (a<='9'))
{cout << "Number";}
else 
{cout << "Symbol";}
getch();
}
