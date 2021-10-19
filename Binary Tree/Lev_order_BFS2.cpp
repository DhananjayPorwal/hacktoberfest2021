#include <iostream>
#include<queue>
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
void lev_odr_BFS_nl(node*root)
{
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		node*f=q.front();
		if(f==NULL)
		{
			cout<<endl;
			q.pop();
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{ 
		cout<<f->data<<" ";
		q.pop();
		if(f->left)
		{
			q.push(f->left);
		}
		if(f->right)
		{
			q.push(f->right);
		}
		}
	}
}
int main() 
{
    node* root=buildtree();
    lev_odr_BFS_nl(root);
}
/*
i/p:
50 25 12 -1 -1 37 30 -1 -1 -1 75 62 -1 70 -1 -1 87 -1 -1
o/p:
50
25 75
12 37 62 87
30 70
*/
