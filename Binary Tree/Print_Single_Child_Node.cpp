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
void print(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
void singlechildnode(node* root,node* parent)
{
    if(root==NULL)
    {
        return ;
    }
    if(parent!=NULL and parent->left==root and parent->right==NULL)
    {
        cout<<root->data<<endl;
    }
    else if(parent!=NULL and parent->left==NULL and parent->right==root)
    {
        cout<<root->data<<endl;
    }
    singlechildnode(root->left,root);
    singlechildnode(root->right,root);
}
int main() 
{

    node* root=buildtree();
    print(root);
    cout<<endl;

    singlechildnode(root,NULL);
}
/*

i/p:
50 25 12 -1 -1 37 30 -1 -1 -1 75 62 -1 70 -1 -1 87 -1 -1
o/p:
50 25 12 -1 -1 37 30 -1 -1 -1 75 62 -1 70 -1 -1 87 -1 -1
50 25 12 37 30 75 62 70 87
30
70

50 50 25 25 12 12 37 37 30 30 75 75 62 62 70 70 87 87
*/