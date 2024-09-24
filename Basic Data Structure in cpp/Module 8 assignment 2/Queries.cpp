#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert(Node* &head ,Node* &tail, int pos,int val)
{
    Node* newnode=new Node(val);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    if(pos==0)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int val,pos;
        cin>>pos>>val;
        insert(head,tail,pos,val);
        cout<<head->val<<" "<<tail->val<<endl;
    }
    return 0;
}