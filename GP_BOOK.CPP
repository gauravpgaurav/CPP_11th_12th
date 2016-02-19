#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
struct book
{
char name[20];
int id,nop;
char category[20];
float cost;
};
void main()
{
 clrscr();
 book b[5];
 int i,l;
 for(i=0;i<5;i++)
    {
      cout<<"Enter the name of the book:"<<endl;
      gets(b[i].name);
      cout<<"Enter id number of the book:"<<endl;
      cin>>b[i].id;
      cout<<"Enter number of pages of the book:"<<endl;
      cin>>b[i].nop;
      cout<<"Enter the category of the book:"<<endl;
      cin>>b[i].category;
      cout<<"Enter cost of the book:"<<endl;
      cin>>b[i].cost;
      cout<<endl<<endl<<endl;
      }
      for(l=0;l<5;l++)
    {
      if (strcmpi(b[l].category,"fiction")==0)
      {cout<<"The details of the book is "<<endl;
      cout<<"NAME:";
      cout<<b[l].name<<endl;
      cout<<"BOOK ID:";
      cout<<b[l].id<<endl;
      cout<<"NUMBER OF PAGES:";
      cout<<b[l].nop<<endl;;
      cout<<"CATEGORY:";
      cout<<b[l].category<<endl;
      cout<<"COST:";
      cout<<b[l].cost<<endl;
      cout<<endl<<endl<<endl<<endl;
      }
    }

      getch();
}
