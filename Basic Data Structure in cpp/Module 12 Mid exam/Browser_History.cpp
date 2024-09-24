#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string val;
        Node* next;
        Node* prev;
    Node(string val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    string input;
    cin>>input;
    while(input!="end")
    {
        Node* newnode=new Node(input);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        cin>>input;
    }
    int q;
    cin>>q;
    Node* current=head;
    while(q--)
    {
        string to_do;
        cin>>to_do;
        if(to_do=="visit")
        {
            string webadrs;
            cin>>webadrs;
            bool found = false;
            Node* tmp=head;
            while(tmp)
            {
                if(tmp->val==webadrs)
                {
                    current=tmp;
                    cout<<current->val<<endl;
                    found=true;
                    break;
                }
                tmp=tmp->next;
            }
            if(found==false)
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(to_do=="prev")
        {
            if(current!=NULL && current->prev!=NULL)
            {
                current=current->prev;
                cout<<current->val<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(to_do=="next")
        {
            if(current!=NULL&&current->next!=NULL)
            {
                current=current->next;
                cout<<current->val<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
    }
    return 0;
}