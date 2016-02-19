#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a,b;
float ans;
char o;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
cout<<"Enter operator"<<endl;
cin>>o;
switch(o)
{
	case '+':
	ans=a+b;
	cout<<"The sum is"<<endl<<ans;
	break;
	case '-':
		ans=a-b;
	cout<<"The difference is"<<endl<<ans;
	break;
	case '*':
	ans=a*b;
	cout<<"The product is"<<endl<<ans;
	break;
	case '%':
	ans=a%b;
	cout<<"The remainder is"<<endl<<ans;
	break;
	case '/':
	ans=a/b;
	cout<<"The quotient is"<<endl<<ans;
	break;
	default: cout<<"Incorrect Input";

}
getch();
}
