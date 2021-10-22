#include <iostream>
using namespace std;

int decimaltobinary(int n){
    int lastdigit=0;
    int ans=0;
    int y=1;
    while(n>0){
        lastdigit=n%2;
        ans= ans+ lastdigit*y;
        y*=10;
        n=n/2;
    }
    return ans;
}
int binarytodecimal(int n){
    int ans=0;
    int z=1;
    while(n>0){
        int f=n%10;
        ans+=f*z;
        z*=2;
        n/=10;
    }
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;

    int p=binarytodecimal(a);
    int q=binarytodecimal(b);
    cout<<decimaltobinary(p+q)<<endl;
    return 0;
}