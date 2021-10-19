#include <iostream>
using namespace std;
class node
{
    public:
        int data;
        node* left;
        node* right;
        node(int d,node* left,node* right)
        {
            this->data=d;
            this->left=left;
        	this->right=right;
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
    node* root=new node(d,NULL,NULL);
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
node* leftclonetree(node* root)
{
	if(root==NULL)
	{
		return NULL;
	}
	node* lcr=leftclonetree(root->left);
	node* rcr=leftclonetree(root->right);
	
	node* nn= new node(root->data,lcr,NULL);
	root->left=nn;
	root->right=rcr;
	return root;
}
node* TransformToNormal_LeftclonedTree(node* root)
{
    if(root==NULL)
    {
        return NULL;
    }

    node* lnn=TransformToNormal_LeftclonedTree(root->left->left);
    node* rnn=TransformToNormal_LeftclonedTree(root->right);

    root->left=lnn;
    root->right=rnn;
    return root;
}
int main() 
{

    node* root=buildtree();
    print(root);
    cout<<endl;
    leftclonetree(root);
    print(root);
    cout<<endl;
    TransformToNormal_LeftclonedTree(root);
	print(root);
}
/*

i/p:
50 25 12 -1 -1 37 30 -1 -1 -1 75 62 -1 70 -1 -1 87 -1 -1
o/p:
50 25 12 37 30 75 62 70 87

50 50 25 25 12 12 37 37 30 30 75 75 62 62 70 70 87 87
*/