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
void incert(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void max(Node* head)
{
    Node* tmp=head;
    int mx=INT_MIN;
    while(tmp!=NULL)
    {
        if(tmp->val>mx)
        {
            mx=tmp->val;
        }
        tmp=tmp->next;
    }
    cout<<mx;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        incert(head,tail,val);
    }
    max(head);
    return 0;
}