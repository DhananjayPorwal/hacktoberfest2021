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
bool find(node* root,int fn)
{
	if(root==NULL)
	{
		return false;
	}
	if(root->data==fn)
	{
		return true;
	}
	bool fl=find(root->left,fn);
	if(fl)
	{
		return true;
	}
	bool fr=find(root->right,fn);
	if(fr)
	{
		return true;
	}
	return false;
}
int main() 
{
    node* root=buildtree();
    int fn;
    cin>>fn;
    int check=find(root,fn);
    if(check)
    {
    	cout<<"true";
	}
	else
	{
		cout<<"false";
	}
  //  print(root);
}
/*
i/p:
50 25 12 -1 -1 37 30 -1 -1 -1 75 62 -1 70 -1 -1 87 -1 -1
30
o/p:
true
*/
