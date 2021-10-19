#include<iostream>
#include<string>
using namespace std;
class node
{
    public:
        int data;
        node* right;
        node* left;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
node* buildtree()
{
    int d;
    cin>>d;
    if(d == -1)
    {
        return NULL;
    }
    node* root = new node(d);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}
void pathtoleaffromnode(node* root, string path, int sum, int lo, int ui)
{
    if(root == NULL)
    {
        return;
    }
    string s;
    if(root->left == NULL and root->right == NULL)
    {
        sum = sum + root->data;
        if(sum <= ui && sum >= lo)
        {
            s = path + to_string(root->data);
            cout<<s;
        }
        return;
    }
    pathtoleaffromnode(root->left,s +" " , sum+root->data,lo,ui);
    pathtoleaffromnode(root->right,s +" " , sum+root->data,lo,ui);
    
}
int main()
{
    node* root = buildtree();
    int lo = 100;
    int ui = 250;
    pathtoleaffromnode(root,"",0,lo,ui);
}
