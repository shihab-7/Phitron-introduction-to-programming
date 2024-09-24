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
void insert(Node* &head,Node*&tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void reverse(Node*&head1,Node*current)
{
    if(current->next==NULL)
    {
        head1=current;
        return;
    }
    reverse(head1,current->next);
    current->next->next=current;
    current->next=NULL;
}
bool is_palin(Node*head,Node*head1)
{
    Node* tmp1=head;
    Node* tmp2=head1;
    while(tmp1!=NULL&&tmp2!=NULL)
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
    Node* head= NULL;
    Node* tail=NULL;
    Node* tmp=head;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        insert(head,tail,val);
    }
    Node*head1=NULL;
    Node*tail1=NULL;
    tmp=head;
    while(tmp!=NULL)
    {
        insert(head1,tail1,tmp->val);
        tmp=tmp->next;
    }
    reverse(head1,head1);
    if(is_palin(head,head1))
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}