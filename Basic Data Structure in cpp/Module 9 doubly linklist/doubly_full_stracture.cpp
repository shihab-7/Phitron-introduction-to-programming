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
void print_doubly(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void print_doubly_reverse(Node* tail)
{
    Node* tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
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
void insert_any_pos(Node*&head,int pos,int val)
{
    Node* newnode=new Node(val);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev=tmp;
}
void insert_head(Node*&head,Node*&tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insert_tail(Node*&head,Node*&tail,int val)
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
void delete_any_pos(Node*&head,Node*&tail,int pos)
{
    if(pos==0)
    {
        delete_head(head,tail);
        return;
    }
    else if(pos==size(head))
    {
        delete_tail(head,tail);
        return;
    }
    else
    {
        Node* tmp=head;
        for(int i=1;i<=pos-1;i++)
        {
            tmp=tmp->next;
        }
        Node* deletenode=tmp->next;
        tmp->next=tmp->next->next;
        tmp->next->prev=tmp;
        delete deletenode;
    }
}
void delete_tail(Node*&head,Node*&tail);
{
    Node* deletenode=tail;
    tail=tail->prev;
    delete deletenode;
    if(tail==NULL)
    {
        head=NULL;
        return;
    }
    tail->next=NULL;
}
void delete_head(Node*&head,Node*&tail)
{
    Node* deletenode=head;
    head=head->next;
    delete deletenode;
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    head->prev=NULL;
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
        insert_tail(head,tail,val);
    }
    int pos,val;
    cin>>pos>>val;
    if(pos>size(head))
    {
        cout<<"Invalid"<<endl;
    }
    else if(pos==0)
    {
        insert_head(head,tail,val);
    }
    else if(pos==size(head))
    {
        insert_tail(head,tail,val);
    }
    else
    {
        insert_any_pos(head,pos,val);
    }
    print_doubly(head);
    cout<<endl;
    print_doubly_reverse(tail);
    return 0;
}