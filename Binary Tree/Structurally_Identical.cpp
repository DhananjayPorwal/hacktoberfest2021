#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    // constructor
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* build(){
    int d;cin>>d;
    string s;cin>>s;
    node* root=new node(d);
    if(s=="true"){
        root->left=build();
    }else{
        root->left=NULL;
    }
    cin>>s;
    if(s=="true"){
        root->right=build();
    }else{
        root->right=NULL;
    }
    return root;
}

bool check(node*root1,node*root2){

    if(root1==NULL and root2==NULL){
        return true;
    }

    else if(root1==NULL or root2==NULL){
        return false;
    }

    return check(root1->right, root2->right) &&  check(root1->left, root2->left);

}
int main() {
    node* root1=build();
    node* root2=build();
   
     if(check(root1,root2)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}
/*
input:
10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
Sample Output
true
*/
