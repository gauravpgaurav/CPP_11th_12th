#include<iostream.h>
#include<conio.h>
class array
{
int arr [10];
public:
void accept();
void display();
int Lsearch ( int ell);
int Bsearch ( int ell);
};
void array :: Lsearch ( int ell )
	{
	 int found = -1;
	 int ell;
	 int arr[10];
	 for ( int i = 0; i < 10; i++ )
		cin >> arr [i];
	 cin >> ell;
	 for ( i = 0; i < 10; i++ )
		{
		 if( ell== arr[i])
			{
			 found = i + 1;
			 break;
			}
		}
		if ( found == -1 )
			cout << " No Puntaka !!!";
	}

void array :: Bsearch ( int ell  )
	{
	for ( i =0; i < 10;i++)
	cin>>arr[i];
	cin>>ell;
	int l = 0, u = 9;
	while (	l<=u)
	{mid=(l+u)/2;
	if (elt<arr[mid])
	{u=mid-1;
	else if (elt>arr[mid])
	{l=mid+1;}
	else
	{found =mid+1);


