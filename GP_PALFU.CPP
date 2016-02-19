#include<iostream.h>
#include<conio.h>
char pal(char[]);
void main()
{clrscr();
char ans,a[80];
cin>>a;
ans=pal(a);
cout<<ans;
getch();

}
char pal( char p[80])
{int i,j=0,k;
char aa='p',r[80];
for(i=0;p[i]!='\0';i++);
for(j=i-1,k=0;j>=0;j--,k++)
{r[k]=p[j];}
r[k]='\0';

for(k=0;k<i;k++)
{
if(p[k]!=r[k])
{
aa='n';
return aa;
}
}
return aa;
getch();}