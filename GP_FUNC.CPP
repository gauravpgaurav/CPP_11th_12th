#include<iostream.h>
#include<conio.h>
void sum()
{int a,b,c,d;
cout<<"Enter numbers:"<<endl;
cin>>a>>b>>c;
d=a+b+c;
cout<<"Sum is:"<<d;}
void sub()
{int a,b,d;
cout<<"Enter numbers:"<<endl;
cin>>a>>b;
d=a-b;
cout<<"Difference is:"<<d;}
void mult()
{int a,b,p;
cout<<"Enter numbers:"<<endl;
cin>>a>>b;
p=a*b;
cout<<"Product is:"<<p;}
void div()
{int a,b,d,r;
cout<<"Enter numbers:"<<endl;
cin>>a>>b;
d=a/b;
r=a%b;
cout<<"Quotient is:"<<d<<endl<<"Remainder is:"<<r;}
void main()
{clrscr();
int s;
cout<<"1. Sum"<<endl<<"2. Diff."<<endl<<"3. Prod."<<endl<<"4. Q & R"<<endl;
cin>>s;
switch(s)
{case 1:sum();
	break;
case 2:sub();
	break;
case 3:mult();
	break;
case 4:div();
	break;
}
getch();}