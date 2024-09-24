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
void print_lnklst(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void insert_head(Node* &head,int val)
{
    Node* newnode= new Node(val);
    newnode->next=head;
    head=newnode;
}
void insert_any_pos(Node *head,int pos,int val)
{
    
    Node* newnode= new Node(val);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"Invalid"<<endl;
            return;
        }
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
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
    int t;
    cin>>t;
    while(t--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos>size(head))
        insert_any_pos(head,pos,val);
        else
        {
            if(pos==0)
            {
                insert_head(head,val);
                print_lnklst(head);
            }
            else
            {
                insert_any_pos(head,pos,val);
                print_lnklst(head);
            }
        }
    }
    return 0;
}