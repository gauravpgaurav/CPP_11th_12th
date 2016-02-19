#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class book
{	private:
	char name[20],category[20];
	float no,price;
	public:
	void input()
	{	 cout<<"Enter book number :"<<endl;
		cin>>no;
		 cout<<"Enter the name of the book :"<<endl;
		gets(name);
		 cout<<"Enter the category of the book:"<<endl;
		gets(category);
	 if (strcmpi(category,"fiction")==0) {price=800;}
	 else if (strcmpi(category,"drama")==0){price=1000;}
	 else if (strcmpi(category,"literature")==0){price=900;}
	 else {price=700;}
	};
	void output()
	{
		 cout<<"Name of the book: ";
		cout<<name<<endl;
		 cout<<"Book no: ";
		cout<<no<<endl;
		 cout<<"Category:";
		cout<<category<<endl;
		 cout<<"Price:";
		cout<<price<<endl;
	};
	};

void main()
{
	fstream file;
	int ch,n=0;
	book b;
	do
	{	clrscr();
		cout<<"1.Enter book details"<<endl;
		cout<<"2. View book details"<<endl<<"3. Exit"<<endl;
		cin>>ch;
		switch(ch)
	  {     case 1:file.open("book",ios::app|ios::binary);
		b.input();
		file.write((char*)&b,sizeof(b));
		file.close();
		cout<<endl<<endl;
		break;
		case 2:clrscr();
		file.open("book",ios::in|ios::binary);
		while(file)
			{	file.read((char*)&b,sizeof(b));
				if (file.eof()) break;
				n++;
				cout<<"The details of the book "<<n<<" is:"<<endl;
				b.output();

			}
		file.close();
		cout<<endl<<endl;
		getch();
		break;
	  }
	}while(ch!=3);

}

