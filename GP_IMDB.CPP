#include<stdio.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>

class movie
{
char moviename[20];
int year;
char rating[7];
	public:
	void accept();
	void display();
	int retname(char[20]);
	int retyear();
};
void movie::accept()
{       cout<<"Enter movie name: ";
	cin>>moviename;
	cout<<"Enter movie year: ";
	cin>>year;
	cout<<"Enter movie rating: ";
	cin>>rating;
}
void movie::display()
{        cout<<"Movie name: "<<moviename<<endl<<"Movie year: "<<year<<endl;
	cout<<"Movie rating: "<<rating;
}
int movie::retname (char n[20])
{
  if(strcmpi(moviename,n)==0)
  return 1;
  else
  return 0;
 }
  int movie::retyear()
   {
    return year ;
    }
    void main()
    {
    fstream file;
    movie m;
    int ch;
    do
    {clrscr();
    cout<<"1. Accept"<<endl;
    cout<<"2. Modify"<<endl ;
    cout<<"3. Delete"<<endl;
    cout<<"4. View all"<<endl;
    cout<<"5. View year vise"<<endl ;
    cout<<"6. No. of records"<<endl;
    cout<<"7. Exit"<<endl;

    cin>>ch;
      switch(ch)
   {
	case 1:	file.open("movie",ios::app|ios::binary);
		m.accept();
		file.write((char*)&m,sizeof(m));
		file.close();
		break;

	case 4:
		file.open("movie",ios::in|ios::binary);
		while(file)
		{
			file.read((char*)&m,sizeof(m));
			if(file.eof())
			break;
			m.display();
			cout<<endl<<endl;
		}
		file.close();
		getch();
		break;

	case 5:
		int y;
		file.open("movie",ios::in|ios::binary);
		cin>>y;
		while(file)
		{
			file.read((char*)&m,sizeof(m));
			if(file.eof())
			break;
			if(y==m.retyear())
			{m.display();
			getch();}
		}
		file.close();
		break;

	case 3: char n[20];
		int k,found=-1;
		ifstream ifile ("movie",ios::in|ios::out|ios::binary);
		ofstream ofile("temp",ios::out|ios::binary);
		cout<<"Enter movie to be deleted: ";
		cin>>n;
		while(ifile)
	       {
			ifile.read((char*)&m,sizeof (m));
			if(file.eof()) break;
			k=m.retname(n);
			if(k!=1)
			ofile.write((char*)&m,sizeof (m));
			else
			found=0;
		}

			ifile.close();
			ofile.close();
			remove("movie");
			rename("temp","movie");
			if(found==-1)
			{
			cout<<"The file does not exist";
			}
			else cout<<"The movie has been deleted";
			getch();
			break;

	case 2: file.open("movie",ios::in|ios::out|ios::binary);
		found=-1;

		cout<<"Enter movie to be modified: ";
		cin>>n;
		while(file)
	       {
			file.read((char*)&m,sizeof (m));
			if( file.eof()) break;
			k=m.retname(n);
			if(k==1)
			{
			found=0;
			cout<<" Re-enter data";
			m.accept();
			int t=file.tellg()-sizeof(m);
			file.seekg(t,ios::beg);
		      //	file.seekg(-1*sizeof(m),ios::cur);
			file.write((char*)&m,sizeof(m));
			}
	       if(found==-1)
	       {cout<<" Movie not found";}
	       file.close();};
	       break;

       case 6:
		file.open("movie",ios::in|ios::binary);
		int i,nor;
		i = nor = 0;
		file.seekg(0,ios::end);
		i=file.tellg();
		nor= i/sizeof(m);
		cout<<nor;
		file.close();
		getch();
		break;
	  }

	  }while(ch!=7);
	     }