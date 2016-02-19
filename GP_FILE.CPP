#include<conio.h>
#include<fstream.h>
void main()
{clrscr();
float agg;
char name[20];
char ch;
fstream file;
file.open("GP_FILE data.txt",ios::out);
do
{cout<<"Enter Name: ";
cin>>name;
cout<<"Enter aggregate: ";
cin>>agg;
file<<name<<endl<<agg<<endl;
cout<<"Continue ?(Yes=y / No=any key)"<<endl;
cin>>ch;}
while(ch=='y'||ch=='Y');
file.close();
file.open("GP_FILE data.txt",ios::in);
while(file)
{file>>name>>agg;
if(file.eof())
break;
cout<<name<<'\t'<<agg<<endl;
}
getch();
}
