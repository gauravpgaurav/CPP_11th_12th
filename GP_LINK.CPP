#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>

struct exam
{int examcode;
char ename[20];
float cutoff;
exam *link;};

void main()
{ clrscr();
int ch;
exam *start,*rear,*temp,*newptr;
start=rear=temp=newptr=NULL;
    do{      cout<<endl<<"1. Insert"<<endl;
	     cout<<"2. Delete"<<endl;
	     cout<<"3. Display"<<endl;
	     cout<<"4. Exit"<<endl<<endl;
	 cin>>ch;
	switch(ch)
	 { case 1: newptr= new exam;
			 if (newptr==NULL)
			     {cout<<" Not enough memory";
			      getch();
			      exit(-1);}
		  cout<<"Enter code: ";
		  cin>>newptr->examcode;
		  cout<<"Enter name: ";
		  cin>>newptr->ename;
		  cout<<"Enter cutoff: ";
		  cin>>newptr->cutoff;
		  newptr->link=NULL;
			if (start==NULL)
			{start=newptr;
			rear=newptr;}
			else
			{rear-> link= newptr ;
			rear=newptr;}
		  break;
	  case 2: cin>>temp->ename;
		  temp=start;
		  start=start->link;
		  delete temp;
		  break;
	  case 3: temp=start;
		  while(temp!=NULL)
		  { cout<<"Code: "<<temp->examcode;
		    cout<<"\t\tName: "<<temp->ename;
		    cout<<"\t\tCutoff: "<<temp->cutoff<<endl;
		    temp=temp->link;}
		  break;
	  }
    }while(ch!=4);
getch();
}