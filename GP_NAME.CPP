#include<fstream.h>
#include<conio.h>
void main()
{ clrscr();
  char name[20],ch;
  fstream file1,file2,file3;
  file1.open("GP_first.txt",ios::out);
  file2.open("GP_last.txt",ios::out);
  do
  {  cout<<"Enter first name: ";
     cin>>name;
     file1<<name<<endl;
     cout<<"Enter last name: ";
     cin>>name;
     file2<<name<<endl;
     cout<<"Do you want to continue?(y/any key): ";
     cin>>ch;
  }while(ch=='y'||ch=='Y');
  file1.close();
  file2.close();
  file1.open("fullname.txt",ios::out);
  file2.open("GP_first.txt",ios::in);
  file3.open("GP_last.txt",ios::in);
  while(file2)
  { file2>>name;
    if(file2.eof())
    break;
    file1<<name<<endl;
    file3>>name;
    file1<<name<<endl;
  }
  file1.close();
  file2.close();
  file3.close();
  file1.open("fullname.txt",ios::in);
  cout<<"First Name\tLast Name"<<endl;
  while(file1)
  { file1>>name;
    if(file1.eof())
    break;
    cout<<name<<"\t\t";
    file1>>name;
    cout<<name<<endl;
  }
  getch();
}