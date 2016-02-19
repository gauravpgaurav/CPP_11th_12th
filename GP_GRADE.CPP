#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
float e,m,s,avg;
char grade;
cout<<"Enter marks"<<endl;
cin>>e>>m>>s;
avg=(e+m+s)/3;
if (avg>=90)
{grade='A';}
else if (avg>=75)
{grade='B';}
else if (avg>=60)
{grade='C';}
else
{grade='D';}
cout<<"The average is "<<avg<<endl<<"The grade is "<<grade;
getch();
}
