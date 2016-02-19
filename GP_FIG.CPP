#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
void main()
{int ch;
clrscr();
cout<<"1. Circle"<<endl;
cout<<"2. Rectangle"<<endl;
cout<<"3. Triangle"<<endl;
cout<<"4. Exit"<<endl;
cout<<"Enter your choice"<<endl;
cin>>ch;
switch(ch)
{case 1:clrscr();
	int ch1;
	cout<<"1. Cicumference"<<endl;
	cout<<"2. Area"<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"Enter your sub choice"<<endl;
	cin>>ch1;
	switch(ch1)
	{case 1:clrscr();
		float r,c;
		cout<<"Enter radius"<<endl;
		cin>>r;
		c=2*3.14*r;
		cout<<"The cicumference is "<<c;
		getch();
		exit(0);
		break;
	case 2:clrscr();
		float R,a;
		cout<<"Enter radius"<<endl;
		cin>>R;
		a=3.14*R*R;
		cout<<"The area is "<<a;
		getch();
		exit(0);
		break;
	case 3: clrscr();
		cout<<"Thank you for using my program.";
		getch();
		exit(0);
	default:clrscr();
		cout<<"Invalid option";
		getch();
		exit(0);}
case 2: clrscr();
	int ch3;
	cout<<"1. Area"<<endl;
	cout<<"2. Perimeter"<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"Enter your sub choice"<<endl;
	cin>>ch3;
	switch(ch3)
	{case 1:clrscr();
		float l,b,a;
		cout<<"Enter length & breadth"<<endl;
		cin>>l>>b;
		a=l*b;
		cout<<"The area is "<<a;
		getch();
		exit(0);
		break;
	case 2:clrscr();
		float L,B,p;
		cout<<"Enter length & breadth"<<endl;
		cin>>L>>B;
		p=2*(L+B);
		cout<<"The perimeter is "<<p;
		getch();
		exit(0);
		break;
	case 3:clrscr();
		cout<<"Thank you for using my program";
		getch();
		exit(0);
		break;
	default: clrscr();
		cout<<"Invalid input";
		getch();
		exit(0);}
case 3:clrscr();
	int ch4;
	cout<<"1. Area of right angled triangle"<<endl;
	cout<<"2. Area of scalene triangle"<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"Enter your suboption"<<endl;
	cin>>ch4;
	switch(ch4)
	{case 1: clrscr();
		float b,h,a;
		cout<<"Enter the base of the right angled triangle"<<endl;
		cin>>b;
		cout<<"Enter the height of the right angled triangle"<<endl;
		cin>>h;
		a=b*h*0.5;
		cout<<"The area of the right angled triangleis "<<a;
		getch();
		exit(0);
		break;
	case 2: clrscr();
		float A,B,C,s,t;
		cout<<"Enter the first side of the scalene triangle"<<endl;
		cin>>A;
		cout<<"Enter the second side of the scalene triangle"<<endl;
		cin>>B;
		cout<<"Enter the third side of the scalene triangle"<<endl;
		cin>>C;
		s=(A+B+C)/2;
		t=sqrt(s*(s-A)*(s-B)*(s-C));
		cout<<"The area of the scalene triangle is "<<t;
		getch();
		exit(0);
		break;
	case 3: clrscr();
		cout<<"Thank you for using my program";
		getch();
		exit(0);
		break;
	default:clrscr();
		cout<<"Invalid input";
		getch();
		exit(0);}
case 4: clrscr();
	cout<<"Thank you for using my program";
	getch();
	exit(0);
	break;
default: clrscr();
	cout<<"Invalid input";
	getch();
	exit(0);
	}
}