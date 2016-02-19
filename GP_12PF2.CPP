#include<iostream.h>
#include<conio.h>
#include<string.h>

struct student
{
	char name[255],grade,result[4];
	int rno;
	float marks[5],agg;
};

main()
{
	clrscr();
	student s;
	cout<<"Enter the name of the student: ";
	cin>>s.name;
	cout<<"Enter the roll number of the student: ";
	cin>>s.rno;
	s.agg=0;
	cout<<"Enter marks in 5 subjects: \n";
	for(int i=0;i<5;i++)
	{
		cin>>s.marks[i];
		s.agg=s.agg+s.marks[i];
	}
	s.agg=s.agg/5;
	if(s.agg>=40)
	{
	       strcpy(s.result,"Pass");
	}
	else
	{
	       strcpy(s.result,"Fail");
	}
	cout<<s.result;
	getch();
}