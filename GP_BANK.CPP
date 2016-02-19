#include<iostream.h>
#include<conio.h>
#include<stdio.h>
	class bank
	{private:
	char name[20],acctype[8];
	long accno, bal;

	public:
	void initial()
		{cout<<"Enter Name: ";
		gets(name);
		cout<<"Enter Account Type (Saving/Current): ";
		cin>>acctype;
		cout<<"Enter Account Number: ";
		cin>>accno;
		cout<<"Enter Balance: Rs.";
		cin>>bal;
		cout<<endl;};
	void withdrawl(long);
	void deposit(long);
	void display();
	};

void bank::withdrawl(long amt)
	{if((bal-amt)>5000)
		{bal-=amt;
		cout<<"Amount withdrawn = Rs."<<amt<<endl<<endl;
		}
	else
		{cout<<"!!Left over balance will be too low therefore no withdrawl possible!!"<<endl<<endl;}
		}
void bank::deposit(long amt)
	{bal+=amt;
	cout<<"Amount deposited = Rs."<<amt<<endl<<endl;}
void bank::display()
	{cout<<"Name: "<<name<<endl<<"Account Type: "<<acctype<<endl;
	cout<<"Accont Number: "<<accno<<endl<<"Total Balance: Rs."<<bal;}

void main()
{clrscr();
int c;
long amt1;
bank b;
b.initial();
cout<<endl<<endl<<"1. Withdraw"<<endl<<"2. Deposit";
cout<<endl<<"Enter Option (1/2): ";
cin>>c;
cout<<endl<<"Enter Amount: Rs.";
cin>>amt1;
clrscr();
switch(c)
{case 1:b.withdrawl(amt1);
	break;
 case 2:b.deposit(amt1);
 }
b.display();
getch();
}


