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
void insert(Node* &head ,Node* &tail, int val)
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
Node* find_mid(Node* head,int mid)
{
    Node* tmp=head;
    while(mid--)
    {
        tmp=tmp->next;
    }
    return tmp;
}
void sort_it(Node* head)
{
    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val<j->val)
            swap(i->val,j->val);
        }
    }
}
void print(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
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
        insert(head,tail,val);
    }
    sort_it(head);
    int x=size(head);
    if(x%2==0 && x!=2)
    {
        int mid1=x/2-1,mid2=x/2;
       Node* a= find_mid(head,mid1);
       Node* b= find_mid(head,mid2);
       cout<<a->val<<" "<<b->val;
        
    }
    else if(x==2)
    {
        print(head);   
    }
    else
    {
        int mid=x/2;
        Node* s= find_mid(head,mid);
        cout<<s->val;
    }
    return 0;
}