#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class employee
{private:
char name[20],desig[20];
float basic,hra,it,net;
public:
void input();
void output();
void compute();
};
void employee::input()
{cout<<"Enter name: ";
 gets(name);
 cout<<"Enter designation: ";
 cin>>desig;
 cout<<"Enter basic salary: ";
 cin>>basic;
 cout<<endl<<endl;
}
void employee::output()
{cout<<endl<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Designation: "<<desig<<endl;
cout<<"Basic salary: "<<basic<<endl;
cout<<"HRA: "<<hra<<endl;
cout<<"Income Tax: "<<it<<endl;
cout<<"Net Pay: "<<net<<endl;
}
void employee::compute()
{ {if(strcmpi(desig,"gm")==0)
	hra=(0.65*basic);
  else if(strcmpi(desig,"manager")==0)
	hra=(0.6*basic);
  else if(strcmpi(desig,"am")==0)
	hra=(0.5*basic);
  else
	hra=(0.4*basic);}
  float t;
t=basic+hra;
       {if(t>=50000)
		it=(0.1*t);
	else if((t<50000)&&(t>=20000))
		it=(0.05*t);
	else
		it=0;
	}
net=(t-it);
}
void main()
{clrscr();
employee e1,e2;
e1.input();
e1.compute();
e2.input();
e2.compute();
clrscr();
e1.output();
e2.output();
getch();}