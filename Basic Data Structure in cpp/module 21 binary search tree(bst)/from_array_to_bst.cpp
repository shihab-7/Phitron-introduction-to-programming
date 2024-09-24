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
bNode* convert(int a[],int n,int l,int r)
{
    if(l > r) return NULL;
    int mid=(l+r)/2;
    bNode* root= new bNode(a[mid]);
    bNode* leftroot= convert(a,n,l,mid-1);
    bNode* rightroot= convert(a,n,mid+1,r);
    root->left=leftroot;
    root->right=rightroot;
    return root;
}
void level_order(bNode* root)
{
    queue<bNode*>q;
    q.push(root);
    while(!q.empty())
    {
        bNode* f=q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left!=NULL) q.push(f->left);
        if(f->right!=NULL) q.push(f->right);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    bNode* root = convert(a,n,0,n-1);
    level_order(root);
    return 0;
}