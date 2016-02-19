#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
long total=0,fact=1;
for (int i=1;i<=8;i++)
{
fact =fact*i;
total = total + fact;
}
cout<<total;
getch(); }


