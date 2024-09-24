#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
        Node *prev;
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
        Node* newnode= new Node(val);
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
            return;
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
        if(sz==0) return true;
        else return false;
    }
};
int main()
{
    myStack s1,s2;
    int m,n;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        s1.push(x);
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        s2.push(y);
    }
    if(s1.size()!=s2.size())
    {
        cout<<"NO";
    }
    else
    {
        bool flag=true;
        while(!s1.empty()&&!s2.empty())
        {
            if(s1.top()!=s2.top())
            {
                flag=false;
            }
            s1.pop();
            s2.pop();
        }
        if(flag)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}