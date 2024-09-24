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
bool search(bNode* root,int a)
{
    if(root==NULL)
    return false;
    if(root->val==a)
    return true;
    if(a < root->val)
    {
        return search(root->left,a);
    }
    else
    {
        return search(root->right,a);
    }
}
int main()
{
    bNode* root= input_tree();
    int x;
    cin>>x;
    if(search(root,x))
        cout<<"YES, found"<<endl;
    else
        cout<<"NO, not found"<<endl;
    
    return 0;
}