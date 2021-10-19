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
node* removeLeafnode(node* root)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->left==NULL and root->right==NULL)
	{
		return NULL;
	}
	root->left=removeLeafnode(root->left);
	root->right=removeLeafnode(root->right);
	return root;
}
int main() 
{
    node* root=buildtree();
    print(root);
    cout<<endl;
    removeLeafnode(root);
    print(root);
}
/*
i/p:
50 25 12 -1 -1 37 30 -1 -1 -1 75 62 -1 70 -1 -1 87 -1 -1
o/p:
50 25 37 75 62
*/

