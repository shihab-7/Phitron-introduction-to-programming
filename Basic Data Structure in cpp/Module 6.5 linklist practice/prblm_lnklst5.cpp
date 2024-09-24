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
bool check_sort(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL&&tmp->next!=NULL)
    {
        if(tmp->val>tmp->next->val)
        {
            return false;
        }
        tmp=tmp->next; 
    }
    return true;
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
    if(check_sort(head))
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}