#include<iostream>
using namespace std;
class node
{
    public:
        int data;
        node*left;
        node*right;
        node(int d)
        {
            data=d;
            left=NULL;
            right=NULL;
        }
};
node* buildtree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    node* root=new node(d);
    root->left=buildtree();
    root->right=buildtree();
    return root;
}
void printklevel(node* root,int k)
{
    if(k<0 or root==NULL)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->data<<endl;
    }
    printklevel(root->left,k-1);
    printklevel(root->right,k-1);
}
int main()
{
    node* root=buildtree();
    int k;
    cin>>k;
    printklevel(root,k);
    
}/*
50 25 12 -1 -1 37 30 -1 -1 -1 75 62 -1 70 -1 -1 87 -1 -1
3
o/p:
30
70
*/

