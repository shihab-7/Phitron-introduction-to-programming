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
        //1.akta akta kore ber kore ana hoy
        bNode* p= q.front();
        q.pop();
        
        //2. jabotio kaj ja ja korte hobe
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

        //3.child node push kortese
        if(p->left!=NULL) q.push(p->left);
        if(p->right!=NULL) q.push(p->right);
    }
    return root;
}
int max_height(bNode* root)
{
    if(root==NULL) return 0;
    int l= max_height(root->left);
    int r= max_height(root->right);
    return max(l,r)+1;
}
int main()
{
    bNode* root = input_tree();
    cout<<max_height(root)<<endl;
    return 0;
}