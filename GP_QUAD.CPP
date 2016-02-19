#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
 clrscr();
 float a,b,c,d,root1,root2;
 cout<<"Enter the coefficient"<<endl;
 cin>>a>>b>>c;
 d=b*b-4*a*c;
 if (d>=0)
 {
 cout<<"Real roots"<<endl;
 root1=-b+sqrt( d)/2*a;
 root2=-b-sqrt(d)/2*a;
 cout<<"The real roots are "<<root1<<root2;
 }
 else
 {
 cout<<"Imaginary  root";
 }
 getch();
 }
