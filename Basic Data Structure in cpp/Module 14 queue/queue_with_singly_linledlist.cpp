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
class myQueue
{
    public:
        Node* head=NULL;
        Node* tail=NULL;
        int sz=0;
    void push(int val)
    {
        sz++;
        Node* newnode=new Node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=tail->next;
    }
    void pop()
    {
        sz--;
        Node* deletenode=head;
        head=head->next;
        delete deletenode;
        if(head==NULL)
        {
            tail=NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }

};

int main()
{
    // myQueue x;
    // x.push(10);
    // x.push(20);
    // x.push(30);
    // x.push(40);
    // cout<<x.front()<<endl;
    // x.pop();
    // cout<<x.front()<<endl;
    myQueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
   return 0;     
}