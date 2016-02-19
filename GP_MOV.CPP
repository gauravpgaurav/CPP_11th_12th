#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
struct movie
{
char name[20];
int rating;
char cat[20];
};
void main()
{
 clrscr();
 movie m[5],temp;
 int i,j,k,l;
 for(i=0;i<5;i++)
    {
      cout<<"Enter the name of the movie:"<<endl;
      gets(m[i].name);
      cout<<"Enter the rating of the movie:"<<endl;
      cin>>m[i].rating;
      cout<<"Enter the category of the movie:"<<endl;
      cin>>m[i].cat;
      cout<<endl<<endl<<endl;
      }
      for(k=0;k<5;k++)
	 {
	  for(j=k+1;j<5;j++)
	    { if(m[k].rating<m[j].rating)
	       {
		 temp=m[k];
		 m[k]=m[j];
		 m[j]=temp;
	     }	}
	 }
	 cout<<"The movies in decreasing order of their ratings are:"<<endl;

 for(l=0;l<5;l++)
    {
      cout<<"The details of the movie is "<<endl;
      cout<<"NAME:";
      puts(m[l].name);
      cout<<"RATING:";
      cout<<m[l].rating;
      cout<<endl;
      cout<<"CATEGORY:";
      cout<<m[l].cat;
      cout<<endl<<endl;
      }

      getch();
}
