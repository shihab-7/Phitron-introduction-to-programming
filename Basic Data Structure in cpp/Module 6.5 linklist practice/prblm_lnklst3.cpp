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
Node* middle_element(Node* head,int mid)
{
    Node* tmp=head;
    while(mid--)
    {
        tmp=tmp->next;
    }
    return tmp;
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
    int s=size(head);
    if(s%2==0)
    {
        int m1=s/2-1,m2=s/2;
        Node* middle1=middle_element(head,m1);
        Node* middle2=middle_element(head,m2);
        cout<<middle1->val<<" "<<middle2->val;
    }
    else
    {
        int mid=s/2;
        Node* middle=middle_element(head,mid);
        cout<<middle->val;
    }
    return 0;
}