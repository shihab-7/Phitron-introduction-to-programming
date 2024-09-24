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
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
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
void sort_linklist(Node* head)
{
    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}
void remove_dub(Node*&head)
{
    Node* tmp=head;
    while(tmp!=NULL && tmp->next!=NULL)
    {
        if(tmp->val==tmp->next->val)
        {
            Node* dublicate=tmp->next;
            tmp->next=tmp->next->next;
            delete dublicate;
        }
        else
        {
            tmp=tmp->next;
        }
        
    }
}
int main()
{
    Node* head= NULL;
    Node* tail= NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        insert(head,tail,val);
    }
    sort_linklist(head);
    remove_dub(head);
    print_linklist(head);
    return 0;
}