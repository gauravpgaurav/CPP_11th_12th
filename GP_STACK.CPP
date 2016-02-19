#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>

class emp
{ int empno;
  char name[20], design[20];
public:
void accept() {cout<<"Enter emp no.: ";
		cin>>empno;
		cout<<"Enter name: ";
		gets(name);
		cout<<"Enter designation: ";
		gets(design);
		}
void display() { cout<<"Emp no.: "<<empno;
		cout<<"\tEmp name: "<<name;
		cout<<"\tDesignation:  "<<design<<endl;
		}
};

void main()
{ clrscr();
emp e[5];
int top=-1, n=5, ch;
do{	cout<<endl<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Display"<<endl;
	cout<<"4. Exit"<<endl;
	 cin>>ch;
	switch(ch)
	 {case 1:
		if (top==n-1)
			cout<<"Overflow"<<endl;
		else
		      top=top+1;
		e[top].accept();
		break;
	  case 2:if (top==-1)
			 cout<<"Underflow"<<endl;
			else
			 top=top-1;
		 break;
	  case 3:for (int i=top;i>=0;i--)
		       {e[i].display();}
		 break;
	 case 4:exit(0);
		break;
	}
  }while(ch!=4);
getch();
}


//cout<<"name: "<<e[i].name;
// cout<<"\tdesignation: "<<e[i].design;
// cout<<"\tno: "<<[i].empno