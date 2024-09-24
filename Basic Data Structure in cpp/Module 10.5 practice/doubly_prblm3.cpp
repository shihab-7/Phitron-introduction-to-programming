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
bool check_pallindrome(Node*head,Node* tail)
{
    Node* i=head;
    Node* j=tail;
    while(i!=j && i->next!=j)
    {
        if(i->val!=j->val)
        {
            return false;
        }
        i=i->next;
        j=j->prev;
    }
    return i->val==j->val;
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
    if(check_pallindrome(head,tail))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}