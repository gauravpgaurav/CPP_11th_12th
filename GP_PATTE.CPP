#include<iostream.h>
#include<conio.h>
float series(int x,int n)
{int f=1,d=1,s=1,i,j;
 float t,sum;
 for(j=1;j<=n;j++)
       {for(i=1;i<=j;i++)
	{f=f*x;
	d=d*i;}
	t=(s*f)/d;
	s=-1*s;
	}
sum=1-t;
return(sum);}
void main()
{clrscr();
int x,n;
float ans;
cin>>x>>n;
ans=float(x,n);
cout<<ans;
getch();}