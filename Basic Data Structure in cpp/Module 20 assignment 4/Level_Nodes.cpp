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
void level_elments(bNode* root,int level)
{
    if(root==NULL) return ;
    queue<pair<bNode*,int>>q;
    q.push({root,0});
    bool x=false;
    while(!q.empty())
    {
        pair<bNode*,int>pr=q.front();
        bNode* node= pr.first;
        int level2=pr.second;
        q.pop();

        if(level==level2)
        {
            x=true;
            cout<<node->val<<" ";
        }
        if(node->left)
        {
            q.push({node->left,level2+1});
        }
        if(node->right)
        {
            q.push({node->right,level2+1});
        }
    }
    if(!x) cout<<"Invalid";
}
int main()
{
    bNode* root= input_tree();
    int x;
    cin>>x;
    level_elments(root,x);
    return 0;
}