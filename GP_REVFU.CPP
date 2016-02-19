#include<iostream.h>
#include<conio.h>
int rev( int);
void main()
{clrscr();
 int a,b;
cin>>a;
b=rev(a);
cout<<b;
getch();
}
int rev( int x)
{ int y,z=0;
while(x!=0)
{y=x%10;
 z=z*10+y;
 x=x/10;
}
return z;
}

