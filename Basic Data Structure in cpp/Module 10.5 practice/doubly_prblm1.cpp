#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert(Node*&head,Node*&tail,int val)
{
    Node* newnode=new Node(val);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
bool check(Node*head1,Node* head2)
{
    Node*tmp1=head1;
    Node*tmp2=head2;
    while(tmp1!=NULL && tmp2!=NULL)
    {
        if(tmp1->val==tmp2->val)
        {
            return true;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    return false;
}
int size(Node* head)
{
    int cnt=0;
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
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
        insert(head1,tail1,val);
    }
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        insert(head2,tail2,val);
    }
    if(size(head1)==size(head2))
    {
        if(check(head1,head2))
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
    return 0;
}