#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class distance;
class distance
{private:
int feet,inches;
public:
void getdata();
void printdata();
distance sum(distance);
};
void distance::getdata()
{ cout<<"Enter Feet: " ;
 cin>>feet;
 cout<<"Enter Inches: ";
 cin>>inches;
 cout<<endl<<endl<<endl;
 }
void distance::printdata()
{ feet+=inches/12;
 inches= inches%12;
 cout<<" The Total Length is: "<<feet<<" feet & "<<inches<<" inches";
 }
 distance distance::sum( distance dd)
 { distance temp;
 temp.inches=inches+dd.inches;
  temp.feet=feet+dd.feet;
 return temp;}
 void main()
 {
 distance t,d1,d2;
 d1.getdata();
 d2.getdata();
 t=d1.sum(d2);
 t.printdata();
 getch();
 }
