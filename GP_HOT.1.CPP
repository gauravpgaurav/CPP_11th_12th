#include<stdio.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>

class hotel
{
char name[20],rtype[10];
int rno,days;
float cost,tariff;
char rating[7];
	public:
	void accept();
	void display();
	void calculate();
	int retname(char[20]);
	int retrtype(char[10]);
};
void hotel::accept()
{
	cout<<"Enter name: ";
	gets(name);
	cout<<"Enter room type (basic/deluxe): ";
	gets(rtype);
	cout<<"Enter room number: ";
	cin>>rno;
	cout<<"Enter numbers of days stay: ";
	cin>>days;
}
void hotel::calculate()
{
	if(strcmpi(rtype,"basic")==0)
	tariff=1000;
	else if(strcmpi(rtype,"deluxe")==0)
	tariff=22000;
	cost=tariff*days;
}
void hotel::display()
{        cout<<"Name: "<<name<<endl<<"Room Number: "<<rno<<endl;
	cout<<"Room Type: "<<rtype<<endl<<"Stayed for: "<<days<<" days";
	cout<<endl<<"Cost: "<<cost<<endl;
}
int hotel::retname (char n[20])
{
  if(strcmpi(name,n)==0)
  return 1;
  else
  return 0;
 }
int hotel::retrtype(char a[10])
   {
    if(strcmpi (rtype,a)==0)
    return 1;
    else
    return 0;
    }
    void main()
    {
    fstream file;
    hotel h;
    int ch;
    do
    {clrscr();
    cout<<"\t!!! WELCOME TO iHOTEL !!!"<<endl<<endl;
    cout<<"1. Accept"<<endl;
    cout<<"2. Modify"<<endl ;
    cout<<"3. Delete"<<endl;
    cout<<"4. View all records"<<endl;
    cout<<"5. View room type vise"<<endl ;
    cout<<"6. No. of records"<<endl;
    cout<<"7. Delete all records"<<endl;
    cout<<"8. Exit"<<endl<<"Enter choice: ";

    cin>>ch;
      switch(ch)
   {
	case 1:	file.open("hotel",ios::app|ios::binary);
		h.accept();
		file.write((char*)&h,sizeof(h));
		h.calculate();
		file.close();
		break;

	case 2: file.open("hotel",ios::in|ios::out|ios::binary);
		int k,found=-1;
		char n[20];
		cout<<"Enter name of person whose details are to be modified: ";
		gets(n);
		while(file)
	       {
			file.read((char*)&h,sizeof(h));
			if( file.eof()) break;
			k=h.retname(n);
			if(k==1)
			{
			found=0;
			cout<<" Re-enter correct details->"<<endl;
			h.accept();
			int t=file.tellg()-sizeof(h);
			file.seekg(t,ios::beg);
			file.write((char*)&h,sizeof(h));
			}
	       if(found==-1)
	       {cout<<"Record not found";}
	       file.close();};
	       break;

	case 3:
		ifstream ifile ("hotel",ios::in|ios::out|ios::binary);
		ofstream ofile("temp",ios::out|ios::binary);
		cout<<"Enter name of person checking out: ";
		gets(n);
		while(ifile)
	       {
			ifile.read((char*)&h,sizeof (h));
			if(file.eof()) break;
			k=h.retname(n);
			if(k!=1)
			ofile.write((char*)&h,sizeof (h));
			else
			found=0;
		}

			ifile.close();
			ofile.close();
			remove("hotel");
			rename("temp","hotel");
			if(found==-1)
			{
			cout<<"Record not found";
			}
			else cout<<n<<" has checked out";
			getch();
			break;


	case 4:
		file.open("hotel",ios::in|ios::binary);
		while(file)
		{
			file.read((char*)&h,sizeof(h));
			if(file.eof())
			break;
			h.display();
			cout<<endl<<endl;
		}
		file.close();
		getch();
		break;

	case 5:
		char y[10];
		int a;
		file.open("hotel",ios::in|ios::binary);
		cout<<endl<<"Which room type? (basic/deluxe): ";
		gets(y);
		while(file)
		{
			file.read((char*)&h,sizeof(h));
			if(file.eof())
			break;
			a=h.retrtype(y);
			if (a==1)
			{cout<<endl;
			h.display();
			getch();}
		}
		file.close();
		break;

       case 6:
		file.open("hotel",ios::in|ios::binary);
		int i,nor;
		i= nor=0;
		file.seekg(0,ios::end);
		i=file.tellg();
		nor=i/sizeof(h);
		cout<<nor;
		file.close();
		getch();
		break;

       case 7:  remove("hotel");
		break;

	  }

	  }while(ch!=8);



}