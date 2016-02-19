#include<iostream.h>
#include<stdio.h>
#include<process.h>
#include<conio.h>
struct node
{char name[20];
 int age;
node *link;};

class list
{node *newptr,*temp,*start,*save;
public:
list(){newptr=temp=start=save=NULL;};
void insert() {newptr= new node;
			if ( newptr==NULL)
			     {cout<<" Not enough memory";
			      getch();
			      exit(-1);}
	     cout<<"Enter name: ";
	     cin>>newptr->name;
	     cout<<"Enter age: ";
	     cin>>newptr->age;
	    newptr->link=NULL;
			if (start==NULL)
			{start=newptr;
			save=newptr;}
			else
			{save-> link= newptr ;
			save=newptr;}
	    };
void remove() { cout<<"Enter name to be deleted: ";
		cin>>temp->name;
		temp=start;
		start=start->link;
		delete temp;};
void display();
~list(){delete newptr,delete start;};
};

void list::display()
{ temp=start;
		 while(temp!=NULL)
		    {  cout<<"Name: "<<temp->name;
		       cout<<"\tAge: "<<temp->age<<endl;
		      temp=temp->link;}
};
void main()
{clrscr();
list l;
int ch;
do{	cout<<endl<<"1. Insert"<<endl;
	cout<<"2. Delete"<<endl;
	cout<<"3. Display"<<endl;
	cout<<"4. Exit"<<endl;
	 cin>>ch;
	switch(ch)
	 {case 1:l.insert();
		 break;
	  case 2:l.remove();
		 break;
	  case 3:l.display();
		 break;
	 case 4:exit(0);
		break;
	}
  }while(ch!=4);
getch();
}