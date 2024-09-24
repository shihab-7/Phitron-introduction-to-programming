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
int max_leaf(bNode* root)
{
    if(root==NULL) return INT_MIN;
    if(root->left==NULL && root->right==NULL)
    {
        return root->val;
    }
    else
    {
        int l=max_leaf(root->left);
        int r=max_leaf(root->right);
        return max(l,r);
    }
}
int min_leaf(bNode* root)
{
    if(root==NULL) return INT_MAX;
    if(root->left==NULL && root->right==NULL)
    {
        return root->val;
    }
    else
    {
        int l=min_leaf(root->left);
        int r=min_leaf(root->right);
        return min(l,r);
    }
}
int main()
{
    bNode* root= input_tree();
    cout<<max_leaf(root)<<" "<<min_leaf(root);
    return 0;
}