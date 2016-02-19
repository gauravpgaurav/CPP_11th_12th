# include<iostream.h>
# include<conio.h>
class merge
{	int a[255],b[255],c[255],m,n;
	public:
	void accept();
	void merger();
	void display();
};
void merge::accept()
{	cout<<"Enter the number of elements in the first array: "  ;
	cin>>m;
	cout<<"Enter the number of elements in the second array: ";
	cin>>n;
	cout<<"Enter the first array in descending order:" <<endl;
	for(int i=0;i<m;i++)
	cin>>a[i];
	cout<<endl<<endl;
	cout<<"Enter the second array in descending order:"<<endl;
	for(int j=0;j<n;j++)
	cin>>b[j];
	cout<<endl<<endl;
}
void merge::merger()
{       int k=0;
	int i=m-1;
	int j=n-1;
	while(i>=0&&j>=0)
	{	if(a[i]<b[j])
		{	c[k]=a[i];
			i--;k++;
		}
		else
		{	c[k]=b[j];
			j--;k++;
		}
	}
	while(j>=0)
	{	c[k]=b[j];
		j--;k++;
	}
	while(i>=0)
	{	c[k]=a[i];
		i--;k++;
	}
}
void merge::display()
{       cout<<"The final array is:"<<endl;
	for(int f=0;f<m+n;f++)
	{	cout<<c[f]<<endl;
	}
}
void main()
{       clrscr();
	merge m;
	m.accept();
	m.merger();
	m.display();
	getch();
}

