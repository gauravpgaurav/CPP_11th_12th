#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[2][2],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		cout<<a[i][j]<<" ";
	}
		cout<<endl;
	}
		for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		if(i==j)
{cout<<"Right diagonal:"<<a[i][j]<<" ";}
else if(i+j==2)
{cout<<"Left diagonal:"<<a[i][j]<<" ";}
}
}
getch();}