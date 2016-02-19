#include<iostream.h>
#include<process.h>
#include<conio.h>
void main()
{
clrscr();
int a[4][4],b[16],i,j,k=0;
cout<<"Enter the elements of the 4X4 square matrix: "<<endl;
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
cin>>a[i][j];
}}
cout<<endl<<endl<<"The diagonal elements are:  ";

for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if((i==j)||(i+j==3))
{cout<<a[i][j]<<"  ";
}
}}
cout<<endl<<endl<<"The non diagonal elements are:  ";

for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if((i!=j)&&(i+j!=3))
{cout<<a[i][j]<<"  ";
}
}}
cout<<endl<<endl<<"The elements which lie above right diagonal are:  ";
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if(i<j)
{cout<<a[i][j]<<"  ";
}
}}
for(i=0;i<4;i++)
{
for(j=0;j<4;k++,j++)
{
b[k]=a[i][j];
}}
cout<<endl<<endl<<endl<<"The elements in form of 1-d array are: ";
for(i=0;i<16;i++)
{
cout<<b[i]<<"  ";
}
getch();
}