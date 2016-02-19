#include<iostream.h>
#include<conio.h>
int pal(char[]);
void main()
{clrscr();
char a[80];
int ans;
cin>>a;
ans=pal(a);
switch(ans)
{case 0:cout<<"Palindrome";
	break;
case 1:cout<<"Not palindrome";
	break;}
getch();

}
int pal( char p[80])
{int i,j=0,k,g=0;
char r[80];
for(i=0;p[i]!='\0';i++);
for(j=i-1,k=0;j>=0;j--,k++)
{r[k]=p[j];}
r[k]='\0';

for(k=0;k<i;k++)
{
if(p[k]!=r[k])
{ g++;
return g;
}
}
return g;
}