// TO INPUT A DATA IN 2D ARRAY FROM USER AND DISPLAY THE SUM OF INDIVIDUAL ROWS OF IT...

#include<iostream>
using namespace std;
#define R 4
#define C 3
int main()
{ 
  int arr[R][C];
  for(int i=0; i<R;i++)
  { 
    for( int j=0; j<C; j++)
    { 
      cout<<"Enter data for index :  "<<i<<j;
	  cin>>arr[i][j];
	}
  }
  for(int i=0; i<R; i++)
  {
    int sum=0;
    cout<<"sum of rows"<<i+1<<":";
    for(int j=0; j<C; j++)
    { 
      sum+=arr[i][j];
	}
     cout<<sum<<endl;
  }
   return 0;
}