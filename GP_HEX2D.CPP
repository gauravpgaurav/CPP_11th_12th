#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int dec=0,pow=1,i,j,k,n;
char hexa[255];
cin>>hexa;
for(i=0;hexa[i]!='\0';i++);

for(j=i;j>=0;j--)
	{if (hexa[j]>='0'&&hexa[j]<='9')
		{n=hexa[j]-48;}
	else
		{n=hexa[j]-55;}
	pow=1;
	for(k=j;k<i;k++)
		{pow=pow*16;}
	dec=dec+(n*pow);
	}
cout<<dec;
getch();}
