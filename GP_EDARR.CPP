#include<iostream.h>
#include<process.h>
#include<conio.h>

class operation
{ int data[10],noe,size;

public:
void insert();
void deletion();
operation(){noe=-1;size=9;}
void display();
};

void operation::insert()
{int pos=-1,i,j,elt;
if(noe==size)
{cout<<" Array is full ";}
else
{
cout<<" Enter the element   : ";
cin>>elt;
if(noe==-1)
{noe++;
 data[noe]=elt;}
else if(data[noe]<elt)
{noe++;
data[noe]=elt;}
else{for(i=0;i<=noe;i++)
{if(data[i]>elt)
{pos=i;
break;
}
}
noe++;
j=noe;
while(j>pos)
{data[j]=data[j-1];
j--;}
data[pos]=elt;}}}

void operation::deletion()
{
 int pos=-1,elt,i,j;
 if(noe==-1)
 {
 cout<<" There is nothing to delete in the array  "<<endl<<endl;
 }
 else
 {
 cout<<" Enter the element to be deleted     :  ";
 cin>>elt;
 for(i=0;i<=noe;i++)
 {if(elt==data[i])
 {pos=i;
 break;
 }}
 if(pos==-1)
 {cout<<" Element doesnt exist  ";}
 else

 {j=pos;
 while(j<noe)
 {data[j]=data[j+1];
 j++;}
 noe--;}}}
 void operation::display()
 {int i;
 cout<<endl<<" The array is  "<<endl;
 for(i=0;i<=noe;i++)
 {
 cout<<data[i]<<endl;
 }
 }

 void main()
 {
 clrscr();
 operation o;
 int ch;
 do
 {
 cout<<"1. Insert a element in the array"<<endl;
 cout<<"2. Delete an element from the array"<<endl;
 cout<<"3. Display the array"<<endl;
 cout<<"4. Exit"<<endl;
 cout<<"Enter your choice:  ";
    cin>>ch;
    cout<<endl;
    switch(ch)
    {
    case 1: o.insert();
	    break;
    case 2: o.deletion();
	    break;
    case 3: o.display();
	    break;
    case 4: exit(0);
	    break;
    default: cout<<"Invalid choice";
    }
    }while(ch!=4);
    getch();
}