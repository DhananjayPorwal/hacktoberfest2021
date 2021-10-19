#include<iostream>
using namespace std;
#define R 3
#define C 3
int enter(int arr[R][C], int r, int c)
{
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<"enter the data ";
			cin>>arr[i][j];
		}
	}
}
int display(int arr[R][C], int r, int c)
{
	cout<<".................the matrix is ................"<<endl;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}
int search(int arr[R][C], int r, int c)
{
	int item,flag=0;
	cout<<"enter the item to be serached :";
	cin>>item;
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			if(item==arr[i][j])
				flag=1;
		}
	}
	if(flag==1)
	{
		cout<<"item found";
	}
	else
	cout<<"item not found";
}
int main()
{   
    int arr[R][C];
	cout<<"press 1 for entering the matrix"<<endl;
	cout<<"press 2 for dispalaying the matrix"<<endl;
	cout<<"press 3 for linear search"<<endl;
	int ch;
do
{   cout<<"enter the choice "<<endl;
    cin>>ch;
	switch(ch)
	{
	case 1 :
		{
			enter(arr,R,C);
			break;
		}
	case 2:
		{
		    display(arr,R,C);
			break;	
		}
	case 3:
		{
			search(arr,R,C);
			break;
		}
	default:
		{
			cout<<"invalid choice";
		}
	}
}
	while(ch!=3);
	return 0;
}

	
	
	
