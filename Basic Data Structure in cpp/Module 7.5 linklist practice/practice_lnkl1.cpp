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
void insert(Node* &head,Node* &tail,int val)
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
int size(Node*head)
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
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
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
    cout<<"YES";
    else
    cout<<"NO";
    
    return 0;
}