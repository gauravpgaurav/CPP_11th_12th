#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class resort
{ private:
int rno;
float charges,days;
char name[20];
float compute();

public:
void getinfo();
void dispinfo();
};

void resort::getinfo()
 { cout<<"Enter Name: ";
 gets(name);
 cout<<"Enter Room no.: ";
  cin>>rno;
  cout<<"Enter no. of days: ";
  cin>>days;
  cout<<"Enter room charges per day: ";
  cin>>charges;
  cout<<endl;
  }


  float resort::compute()
 { float amt;
   amt= days*charges;
   if( amt>=11000)
   { amt=amt*1.02;}
   return amt;
 }


   void resort::dispinfo()
   { float a;
   a= compute();
   cout<<endl;
   cout<<"Name: "<<name<<endl;
   cout<<"Room no.: "<<rno<<endl;
    cout<<"Days: "<<days<<endl;
     cout<<"Charges: "<<charges<<endl;
     cout<<"Grand total: "<<a<<endl<<endl;
     }

   void main()
   {clrscr();
    resort r1,r2;
    r1.getinfo();
    r2.getinfo();
    clrscr();
    r1.dispinfo();
    r2.dispinfo();
    getch();

}

