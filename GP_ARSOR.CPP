#include<iostream.h>
#include<process.h>
#include<conio.h>
class array
{
int data[10];
public:
void accept();
void selection();
void bubble();
void insertion();
void display();
};
void array::accept()
{
cout<<"Enter the ten elements of the array:   "<<endl;
for(int z=0;z<10;z++)
{
cin>>data[z];
}

}


void array::display()
{
cout<<"The elements sorted in descending order are:  ";
for(int x=0;x<10;x++)
{
cout<<data[x]<<endl;
}
}

void array::selection()
{
int i,j,s,pos;
for(i=0;i<9;i++)
{
s=data[i];
pos=i;

for(j=i+1;j<10;j++)
{
if(s<data[j])
{
s=data[j];
pos=j;
}
}
data[pos]=data[i];
data[i]=s;
}

}


void array::bubble()
{
int k,l,t;
for(k=0;k<10;k++)
{
for(l=0;l<10-k;l++)
{
if(data[l]<data[l+1])
{
t=data[l];
data[l]=data[l+1];
data[l+1]=t;

}}
}
}


void array::insertion()
{
int m,n,temp;
for(m=1;m<10;m++)
{
temp=data[m];
n=m-1;

while((temp>data[n])&&(n!=-1))
{
data[n+1]=data[n];
n--;
}
data[n+1]=temp;
}
}

void main()
{
array a;
clrscr();
int ch;
do
{clrscr();
cout<<"1. Accept the array "<<endl;
cout<<"2. Selection sort "<<endl;
cout<<"3. Bubble sort "<<endl;
cout<<"4. Insertion sort "<<endl;
cout<<"5. Display the sorted array "<<endl;
cout<<"6. Exit "<<endl;
cout<<"Enter your choice: ";
cin>>ch;
cout<<endl<<endl;
switch(ch)
{
case 1: a.accept();
	break;
case 2: a.selection();
	break;
case 3: a.bubble();
	break;
case 4: a.insertion();
	break;
case 5: a.display();
	break;
case 6: exit(0);
	break;
}
getch();
}while(ch!=6);

}
