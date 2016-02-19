#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<math.h>
void main()
{clrscr();
int e;
cout<<"THE CALCULATOR"<<endl;
cout<<"1. Calculations"<<endl;
cout<<"2. Trignometric Values"<<endl;
cout<<"3. Comparisions"<<endl;
cout<<"4. Exit"<<endl;
cout<<"Enter choice number :"<<endl;
cin>>e;
switch(e)
{case 1:clrscr();
	int e1;
	cout<<"1. Add 3 nos."<<endl;
	cout<<"2. Product of 3 nos."<<endl;
	cout<<"3. Power of no."<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"Enter sub choice number :"<<endl;
	cin>>e1;
	switch(e1)
	{case 1:clrscr();
		float a,b,c,s;
		cout<<"Enter the 3 numbers :"<<endl;
		cin>>a>>b>>c;
		s=a+b+c;
		cout<<"The sum is "<<s;
		getch();
		exit(0);
		break;
	case 2: clrscr();
		float A,B,C,p;
		cout<<"Enter the 3 numbers :"<<endl;
		cin>>A>>B>>C;
		p=A*B*C;
		cout<<"The product is "<<p;
		getch();
		exit(0);
		break;
	case 3: clrscr();
		float x,y,z;
		cout<<"Enter the number and then the power exponent :"<<endl;
		cin>>x>>y;
		z=pow(x,y);
		cout<<"The power is "<<z;
		getch();
		exit(0);
		break;
	case 4: exit(0);
		break;
	default:clrscr();
		cout<<"Invalid";
		getch();
		exit(0);
		break;}
case 2:clrscr();
	int e2;
	cout<<"1. Sine"<<endl;
	cout<<"2. Cosine"<<endl;
	cout<<"3. Tangent"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"Enter sub choice number :"<<endl;
	cin>>e2;
	switch(e2)
	{case 1:clrscr();
		float s1,ans;
		cout<<"Enter the angle (in degrees) :"<<endl;
		cin>>s1;
		ans=sin((s1*3.14)/180);
		cout<<"Sin "<<s1<<"= "<<ans;
		getch();
		exit(0);
		break;
	case 2:clrscr();
		float c1,ans2;
		cout<<"Enter the angle (in degrees) :"<<endl;
		cin>>c1;
		ans2=cos((c1*3.14)/180);
		cout<<"Cos "<<c1<<"= "<<ans2;
		getch();
		exit(0);
		break;
	case 3:clrscr();
		float t1,ans3;
		cout<<"Enter the angle (in degrees) :"<<endl;
		cin>>t1;
		ans3=tan((t1*3.14)/180);
		cout<<"Tan "<<t1<<"= "<<ans3;
		getch();
		exit(0);
		break;
	case 4: exit(0);
		break;
	default:clrscr();
		cout<<"Invalid";
		getch();
		exit(0);
		}
case 3: clrscr();
	int e4;
	cout<<"1. Descending order"<<endl;
	cout<<"2. Accending order"<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"Enter sub choice number :"<<endl;
	cin>>e4;
	switch(e4)
	{case 1:clrscr();
		int a,s,d;
		cout<<"Enter the 3 numbers :"<<endl;
		cin>>a>>s>>d;
		if ((a>=s)&&(a>=d))
		{if (s>=d)
		{cout<<"The descending order of the 3 nos. is "<<a<<" "<<s<<" "<<d;
		getch();}
		else if (d>=s)
		{cout<<"The descending order of the 3 nos. is "<<a<<" "<<d<<" "<<s;
		getch();}
		else
		{cout<<"Invalid";
		getch();}}
		else if ((s>=d)&&(s>=a))
		{if (a>=d)
		{cout<<"The descending order of the 3 nos. is "<<s<<" "<<a<<" "<<d;
		getch();}
		else if (d>=a)
		{cout<<"The descending order of the 3 nos. is "<<s<<" "<<d<<" "<<a;
		getch();}
		else
		{cout<<"Invalid";
		getch();}}
		else if ((d>=s)&&(d>=a))
		{if (s>=a)
		{cout<<"The descending order of the 3 nos. is "<<d<<" "<<s<<" "<<a;
		getch();}
		else if (a>=s)
		{cout<<"The descending order of the 3 nos. is "<<d<<" "<<a<<" "<<s;
		getch();}
		else
		{cout<<"Invalid";
		getch();}}
		break;
	case 2: clrscr();
		int q,w,e;
		cout<<"Enter the 3 numbers :"<<endl;
		cin>>q>>w>>e;
		if ((q>=w)&&(q>=e))
		{if (w>=e)
		{cout<<"The accending order of the 3 nos. is "<<e<<" "<<w<<" "<<q;
		getch();}
		else if(e>=w)
		{cout<<"The accending order of the 3 nos. is "<<w<<" "<<e<<" "<<q;
		getch();}
		else
		{cout<<"Invalid";
		getch();}
		}
		else if ((w>=e)&&(w>=q))
		{if (e>=q)
		{cout<<"The accending order of the 3 nos. is "<<q<<" "<<e<<" "<<w;
		getch();}
		else if (q>=e)
		{cout<<"The accending order of the 3 nos. is "<<e<<" "<<q<<" "<<w;
		getch();}
		else
		{cout<<"Invalid";
		getch();}
		}
		else if ((e>=q)&&(e>=w))
		{if (w>=q)
		{cout<<"The accending order of the 3 nos. is "<<q<<" "<<w<<" "<<e;
		getch();}
		else if (q>=w)
		{cout<<"The accending order of the 3 nos. is "<<w<<" "<<q<<" "<<e;
		getch();}
		else
		{cout<<"Invalid";
		getch();
		}
	      case 3:exit(0);}

case 4: getch();
	exit(0);
default:clrscr();
	cout<<"Invalid";
	getch();
	exit(0);}
	}
	}





