#include <iostream>
using namespace std;
class node
{
    public:
        int data;
        node* left;
        node* right;
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
void printpre(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    printpre(root->left);
    printpre(root->right);
}
void printin(node* root)
{
    if(root==NULL)
    {
        return;
    }
	printin(root->left);
    cout<<root->data<<" ";
    printin(root->right);
}
void printpost(node* root)
{
    if(root==NULL)
    {
        return;
    }
    
    printpost(root->left);
    printpost(root->right);
    cout<<root->data<<" ";
}
int main() 
{
    node* root=buildtree();
    printpre(root);
    cout<<endl;
    printin(root);
    cout<<endl;
	printpost(root);
}
/*
i/p:
50 25 12 -1 -1 37 30 -1 -1 -1 75 62 -1 70 -1 -1 87 -1 -1
o/p:
50 25 12 37 30 75 62 70 87 
12 25 30 37 50 62 70 75 87 
12 30 37 25 70 62 87 75 50 
*/
