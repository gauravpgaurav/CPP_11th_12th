#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
class string
{
char str[255];
public:
void accept();
void display();
int palindrome();
void reverse();
void summary();
};
void string::accept()
{
cout<<"Enter the string:	";
gets(str);
cout<<endl<<endl;
}

int string::palindrome()
{
char rev[255];
int flag=0,i,j,r;
for(i=0;str[i]!='\0';i++);
for(i--,j=0;i>=0;i--,j++)
{
rev[j]=str[i];
}
rev[j]='\0';

for(i=0;i<j;i++)
{
if(str[i]!=rev[i])
{
flag=1;
break; }
}
if(flag==1)
{
r=0;
return r;
}
else
{
r=1;
return r;
}
}

void string::reverse()
{
cout<<"The reverse of string is:	";
for(int i=0;str[i]!='\0';i++);
for(int j=i;j>=0;j--)
{
cout<<str[j];
}
cout<<endl<<endl;
}

void string::summary()
{
for(int q=0;str[q]!='\0';q++);
int l=0,p=0;
for(int k=0;k<q;k++)
{
switch(str[k])
{
case 'a':  case 'e': case 'o':
case 'i':  case 'u':   l++;
}
if(str[k]==' ')
{
p++;
}
}
int s;
s=q-p;
cout<<" Number of vowels are      : "<<l<<endl;
cout<<" Number of spaces are      : "<<p<<endl;
cout<<" Length of string is       : "<<s<<endl;
cout<<" Number of consonants are  : "<<s-l<<endl<<endl<<endl;
}
void string::display()
{
cout<<" The string is    :  ";
puts(str);
cout<<endl<<endl;
}


void main()
{
clrscr();
string s;
int ch,c;
do
{
cout<<" 1. Accept the string "<<endl;
cout<<" 2. Print the reverse of string "<<endl;
cout<<" 3. Print whether string was palindrome or not "<<endl;
cout<<" 4. Print the summary of string "<<endl;
cout<<" 5. Display the string "<<endl;
cout<<" 6. Exit "<<endl;
cout<<" Enter your choice: ";
cin>>ch;
switch(ch)
{
case 1: s.accept();
	break;
case 2: s.reverse();
	break;
case 3: c=s.palindrome();
	if(c==1)
	{
	cout<<"String is a palindrome "<<endl<<endl;
	}
	else
	{
	cout<<"String is not a palindrome "<<endl<<endl;
	}
	break;
case 4: s.summary();
	break;
case 5: s.display();
	break;

}
}while(ch!=6);
getch();
}

