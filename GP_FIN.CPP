#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	int a,b=0;
	char ch='y';
	while (ch=='y')
	{       clrscr();
		cout<<"1. Add"<<endl<<"2. Product"<<endl;
		cout<<"3. Greatest"<<endl<<"4. Smallest"<<endl<<"5. Exit"<<endl;
		cin>>b;
		switch (b)
		{
			case 1:
				clrscr();
			float a,b,c,s;
			cout<<"Enter the 3 numbers :"<<endl;
			cin>>a>>b>>c;
			s=a+b+c;
			cout<<"The sum is "<<s;
			getch();
			break;
			case 2:
				clrscr();
				float A,B,C,p;
				cout<<"Enter the 3 numbers :"<<endl;
			cin>>A>>B>>C;
			p=A*B*C;
			cout<<"The product is "<<p;
			getch();
			break;
			case 3:
				clrscr();
				int q,w,e;
				cout<<"Enter the 3 numbers :"<<endl;
				cin>>q>>w>>e;
				if ((q>=w)&&(q>=e))
				{
					cout<<"The greater no. is "<<q;
					getch();
				}
				else if ((w>=e)&&(w>=q))
				{
					cout<<"The greater no. is "<<w;
					getch();
				}
				else if ((e>=q)&&(e>=w))
				{
					cout<<"The greater no. is "<<e;
					getch();
				}
				else
				{
					cout<<"Invalid";
					getch();
				}
				break;
			case 4:
				clrscr();
		int z,x,y;
		cout<<"Enter the 3 numbers :"<<endl;
		cin>>z>>x>>y;
		if ((z>=x)&&(z>=y))
		{if (x>=y)
		{cout<<"The smallest no. is "<<y;
		getch();}
		else if(y>=x)
		{cout<<"The smallest no. is "<<x;
		getch();}
		}
		else if ((x>=y)&&(x>=z))
		{if (y>=z)
		{cout<<"The smallest no. is "<<z;
		getch();}
		else if (z>=y)
		{cout<<"The smallest no. is "<<y;
		getch();}
		}
		else if ((y>=z)&&(y>=x))
		{if (z>=x)
		{cout<<"The smallest no. is "<<x;
		getch();}
		else if (x>=z)
		{cout<<"The smallest no. is "<<z;
		getch();}
		}
		else
		{cout<<"invalid";
		getch();
		}
		break;
case 5: 	exit(0);
default: cout<<"Invalid";
		getch(); }
cout<<endl<<"Do you wish to continue (y/n)"<<endl;
cin>>ch;}
getch();}
