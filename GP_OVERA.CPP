#include<iostream.h>
#include<conio.h>
#include<math.h>
void area(float a,float b,float c)
{float ar,s;
s=(a+b+c)/2;
ar=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"The area is: "<<ar;
}
void area(float a)
{float ar;
 ar= (3.14)*a*a;
cout<<"The area is: "<<ar;}
void area(float a, float b)
{float ar;
ar= (3.14)*a*b;
cout<<"The area is: "<<ar;}
void area()
{float a;
cout<<"Enter length of side: ";
cin>>a;
cout<<"The area is: "<<a*a;}
void main()
{clrscr();
 float a,b,c;
 int ch;
cout<<"Find area of: "<<endl;
cout<<"1. Triangle"<<endl<<"2. Circle"<<endl;
cout<<"3. Cone (Curved Surface Area)"<<endl<<"4. Square"<<endl;
cin>>ch;
switch (ch)
{case 1: cout<<"Enter the 3 sides: "<<endl;
	cin>>a>>b>>c;
	area(a,b,c);
	 break;
case 2:cout<<"Enter radius: ";
	cin>>a;
	area(a);
	break;
case 3:cout<<"Enter radius & slant height: "<<endl;
	cin>>a>>b;
	area(a,b);
	break;
case 4:area();
	break;
	};
getch();
}
