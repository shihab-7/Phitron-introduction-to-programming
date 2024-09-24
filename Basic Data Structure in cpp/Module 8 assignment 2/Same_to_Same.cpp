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
int size(Node* head)
{
    Node* tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
bool check_sim(Node*head1,Node*head2)
{
    Node* tmp1=head1;
    Node* tmp2=head2;
    while(tmp1!=NULL && tmp2!=NULL)
    {
        if(tmp1->val!=tmp2->val)
        {
            return false;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    return true;
}
int main()
{
    Node* head1=NULL;
    Node* head2=NULL;
    Node* tail1=NULL;
    Node* tail2=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        incert(head1,tail1,val);
    }
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        incert(head2,tail2,val);
    }
    int sz1=size(head1),sz2=size(head2);
    if(sz1==sz2)
    {
        if(check_sim(head1,head2))
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        cout<<"NO";
    }
}