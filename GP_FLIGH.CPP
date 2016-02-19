#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class flight
{
	private:
	int fno;
	float dist,fuel;
	char dest[50];
	void clacfuel();
	public:
	void feedinfo()
	{cout<<"Enter Flight no. : ";
	cin>>fno;
	cout<<"Enter Distance: ";
	cin>>dist;
	cout<<"Enter Destination: ";
	gets(dest);
	cout<<endl;
	clacfuel();}
	void dispinfo();
};
void flight::clacfuel()
{
	if(dist<=1000)
	fuel=500;

	else if ((dist>1000)&&(dist<=2000))
	fuel=1100;
	else
	fuel=2200;
}
void flight::dispinfo()
{
	cout<<endl<<endl;
	cout<<"Flight Number: "<<fno<<endl;
	cout<<"Distance: "<<dist<<endl;
	cout<<"Destination: "<<dest<<endl;
	cout<<"Fuel: "<<fuel;
}
void main()
{
	clrscr();
	flight f[5];
	for(int i=0;i<5;i++)
	{
		f[i].feedinfo();
	}
	for(i=0;i<5;i++)
	{
		f[i].dispinfo();
	}
	getch();
}
