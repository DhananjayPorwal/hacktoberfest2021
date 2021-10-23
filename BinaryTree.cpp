#include <iostream>

using namespace std;

int main()
{
    int a[20];
     int i=5,choice,se,de,j;
     a[0]=0;
     a[1]=10;
     a[2]=20;
     a[3]=30;
     a[4]=40;
     cout<<"Enter any one of the choice\n";
     cout<<"1. Insert Node\n 2. Search Node \n  3. Delete Node ";
     cin>>choice;
  
     switch(choice)
     {
     case 1:
        {
            cout<<"Enter the element to be inserted ";
            cin>>a[i];
            i++;
            cout<<"Element inserted successfully!!!!";
        }
        break;
     case 2:
        {
            int p;
            p=0;
            cout<<"Insert the element to be searched ";
            cin>>se;
            for(int j=0;j<i;j++)
            {
                if(a[j]==se)
                {
                    p=1;
                    cout<<"Element is being found at the index position:"<<j;
                }
            }
            if(p==0)
            {
                cout<<"\nWrong Input!!\n ";
            }
     }
    break;
     case 3:
        {
            cout<<"Enter the element to be deleted ";
            cin>>de;
            for(j=0;j<i;j++)
            {
                if(a[j]==de)
                    a[j]=0;
            }
            cout<<"Element is being deleted successfully!";
        }
        break;
     default:
        cout<<"Wrong Choice";

}
   cout<<"\nBinary Tree is:\n";
    for(j=1;j<i;j++)
    {
        cout<<a[j]<<"  ";
    }
return 0;
}
