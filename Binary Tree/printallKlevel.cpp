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
int printallklevel(node* root, node* target,int k)
{
	if(root==NULL)
	{
		return -1;
	}
	if(root==target)
	{
		printklevel(target,k);
		return 0;
	}
	
	int dl=printallklevel(root->left,target,k);
	
	if(dl!=-1)
	{
		if(dl+1==k)
		{
			cout<<root->data;
		}
		else
		{
			printklevel(root->right,k-2-dl);
		}
		return 1+dl;
	}
	
	int dr=printallklevel(root->right,target,k);
	
	if(dr!=-1)
	{
		if(dr+1==k)
		{
			cout<<root->data;
		}
		else
		{
			printklevel(root->left,k-2-dr);
		}
		return 1+dr;
	}
	return -1;
}
int main()
{
    node* root=buildtree();
    int k;
    cin>>k;
    node* target=root->left->right;
    printallklevel(root,target,k);
    
}/*
50 25 12 -1 -1 37 30 -1 -1 -1 75 62 -1 70 -1 -1 87 -1 -1 
2  (target==37)
Sample Output
12
50
*/

