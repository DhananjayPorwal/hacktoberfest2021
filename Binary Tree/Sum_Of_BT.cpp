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
int size(node*root)
{
	if(root==NULL)
	{
		return 0;
	}
	int ls=size(root->left);
	int rs=size(root->right);
	return ls+rs+1;
}
int sum(node*root)
{
	if(root==NULL)
	{
		return 0;
	}
	int ls=sum(root->left);
	int rs=sum(root->right);
	return ls+rs+root->data;
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
int main() 
{
    node* root=buildtree();
 // cout<<size(root)<<endl;
    cout<<sum(root)<<endl;
    print(root);
}
/*
i/p:
50 25 12 -1 -1 37 30 -1 -1 -1 75 62 -1 70 -1 -1 87 -1 -1
o/p:
448
50 25 12 37 30 75 62 70 87
*/
