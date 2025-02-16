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
class myStack
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
        newnode->prev=tail;
        tail=tail->next;
    }
    void pop()
    {
        sz--;
        Node* deletenode=tail;
        tail=tail->prev;
        if(tail==NULL)
        {
            head=NULL;
        }
        else 
        {
            tail->next=NULL;
        }
        delete deletenode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0)return true;
        else return false;
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
        newnode->prev=tail;
        tail=tail->next;
    }
    void pop()
    {
        sz--;
        Node* deletenode=head;
        head= head->next;
        if (head==NULL)
        {
            tail=NULL;
            delete deletenode;
            return;
        }
        head->prev=NULL;
        delete deletenode;
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
    myStack a;
    myQueue b;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        a.push(val);
    }
    for(int i=0;i<m;i++)
    {
        int val;
        cin>>val;
        b.push(val);
    }
    bool flag  = true;
    if(a.size()!=b.size())
    {
        flag = false;
    }
    else
    {
        while(!a.empty() && !b.empty())
        {
            if(a.top()!=b.front())
            {
                flag = false;
            } 
            a.pop();
            b.pop();
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}