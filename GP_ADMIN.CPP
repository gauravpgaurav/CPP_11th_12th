#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class admission
{ float admin,fee;
int classy;
char name[15];
public:
int readdata()
{cout<<"Enter Name: ";
gets(name);
cout<<"Enter Admission No.: ";
cin>>admin;
cout<<"Enter Fee: ";
cin>>fee;
cout<<"Enter Class: ";
cin>>classy;
cout<<endl;
return classy;
}
void dispdata();

};
void admission::dispdata()
{cout<<endl<<endl<<"Name: "<<name<<endl<<"Admission No.: "<<admin<<endl;
cout<<"Class: "<<classy<<endl<<"Fees: "<<fee<<endl;}

void main()
{clrscr();
admission a[5];
int i,c[5];
for(i=0;i<5;i++)
{
c[i]=a[i].readdata();
}
clrscr();
{for(i=0;i<5;i++)
if (c[i]==11)
a[i].dispdata();
}
getch();
}
