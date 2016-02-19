#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class publication
{	protected:
	char title[20];
	float cost;
	public:
	void getdata()
		{cout<<"Enter name of publication: ";
		gets(title);
		cout<<"Enter cost: ";
		cin>>cost;
		}
	void putdata()
		{cout<<"Publication: "<<title<<endl;
		cout<<"Cost: "<<cost<<endl;
		}
};
class books:public publication
{	protected:
	int pagecount;
	public:
	void getdata()
		{ publication::getdata();
		 cout<<"Enter pagecount: ";
		 cin>>pagecount;}

	void putdata()
		{ publication::putdata();
		cout<<"Page Count: "<<pagecount<<endl;}
};
class dvd:public publication
{	protected:
	int playingtime;
	public:
	void getdata()
		{publication::getdata();
		cout<<"Enter playingtime: ";
		cin>>playingtime;}
	void putdata()
		{ publication::putdata();
		cout<<"Playing Time: "<<playingtime;}
};

void main()
{
	int i;
	publication p;
	books b;
	dvd d;
	do{ clrscr();
	cout<<endl<<"1. Enter data for books"<<endl<<"2. Display data for books"<<endl;
	cout<<"3. Enter data for DVDs "<<endl<<"4. Display data for DVDs"<<endl;
	cout<<"5. Accept data for publication"<<endl<<"6. Display data for publication"<<endl<<"7. Exit"<<endl<<endl;
	cin>>i;
	switch(i)
		{case 1: b.getdata();
			break;
		case 2: b.putdata();
			getch();
			break;
		case 3: d.getdata();
			break;
		case 4: d.putdata();
			getch();
			break;
		case 5: p.getdata();
			break;
		case 6: p.putdata();
			getch();
			break;
		}

	}while(i!=7);

}


