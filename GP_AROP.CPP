#include<iostream.h>
#include<conio.h>
class operation
{int data[10],noe,size;
public:
void insert();
void remove();
operation()
{noe=-1;
size=9;}
void display();
};
void operation::insert()
{int elt,pos=-1,i,j;
if(noe==size)
{cout<<"Array is full";}
else
{cin>>elt;
if (noe==-1)
{noe++;
data[noe]=elt;}
else if (data[noe]<elt)
{noe++;
data[noe]=elt;}
else
{for(i=0;i<=noe;i++)
{if (data[i]>elt)
{pos=i;
break;}
}
noe++;
j=noe;
while(j>pos)
{data[j]=data[j-1];
j--;}
data[pos]=elt;
}
}}
void operation::remove()
{int pos=-1,elt,i,j;
if(noe==-1)
{cout<<"Nothing to delete";}
else
{cin>>elt;
for(i=0;i<=noe;i++)
{if(elt==data[i])
{pos=i;
break;
}
}
if (pos==-1)
{cout<<"Element doesn't exist";}
else
{j=pos;
while(j<noe)
{data[j]=data[j+1];
noe--;
j++;
}}
}
void operation::display()
{int i;
for (i=0;i<=noe;i++)
{cout<<data[i];}
}
void main()
{operation o;
int ch=0;
do
 {
	cout<<"1. Insert"<<endl<<"2. Display";
	cout<<"3. Deletion"<<endl<<"4. Exit"<<endl;
	cin>>ch;
	switch(ch)
	{	case 1:o.insert();
		       break;
		case 2: o.display();
			break;
