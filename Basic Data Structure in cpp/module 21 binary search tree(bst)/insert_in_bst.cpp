#include<bits/stdc++.h>
using namespace std;
class bNode
{
    public:
        int val;
        bNode* left;
        bNode* right;
    bNode(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
bNode* input_tree()
{
    int val;
    cin>>val;
    bNode* root;
    if(val==-1) root=NULL;
    else root=new bNode(val);
    queue<bNode*>q;
    if(root!=NULL) q.push(root);
    while(!q.empty())
    {
        bNode* p= q.front();
        q.pop();
        
        int l,r;
        cin>>l>>r;
        bNode* myleft;
        bNode* myright;
        if(l==-1) myleft =NULL;
        else myleft= new bNode(l);
        if(r==-1) myright=NULL;
        else myright=new bNode(r);
        p->left=myleft;
        p->right=myright;

        if(p->left!=NULL) q.push(p->left);
        if(p->right!=NULL) q.push(p->right);
    }
    return root;
}
void insert(bNode* &root, int x)
{
    if(root==NULL)
    {
        root= new bNode(x);
        return;
    }
    if(x < root->val)
    {
        if(root->left==NULL)
        {
            root->left= new bNode(x);
        }
        else
        {
            insert(root->left,x);
        }
    }
    else
    {
        if(root->right==NULL)
        {
            root->right=new bNode(x);
        }
        else
        {
            insert(root->right,x);
        }
    }
}
void level_order(bNode* root)
{
    queue<bNode*>q;
    q.push(root);
    while(!q.empty())
    {
        bNode* f= q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left!=NULL) q.push(f->left);
        if(f->right!=NULL) q.push(f->right);
    }
}

int main()
{
    bNode* root= input_tree();
    int x;
    cin>>x;
    insert(root,x);
    level_order(root);
    return 0;
}