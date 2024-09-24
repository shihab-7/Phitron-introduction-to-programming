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
void insert_tail(Node* &head,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head = newnode;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void print_linklist(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void recursion_reverse_linklist(Node* rev)
{
    if(rev==NULL)
    return;
    recursion_reverse_linklist(rev->next);
    cout<<rev->val<<" ";
}
void reverse(Node*&head,Node*current)
{
    if(current->next==NULL)
    {
        head=current;
        return;
    }
    reverse(head,current->next);
    current->next->next=current;
    current->next=NULL;
}
int main()
{
    Node* head= NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        insert_tail(head,val);
    }
    reverse(head,head);
    print_linklist(head);
    return 0;
}