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
void insert_tail(Node* &head,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head = newnode;
        cout<<"Inserted at head"<<endl<<endl;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
    cout<<endl<<"Inserted at tail"<<endl<<endl;
}
void print_linklist(Node* head)
{
    cout<<endl;
    cout<<"Your linked list : ";
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
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
            cout<<endl<<"Invalid Position"<<endl<<endl;
            return;
        }
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<endl<<"inserted at "<<pos<<endl<<endl;
}
void insert_head(Node* &head,int val)
{
    Node* newnode= new Node(val);
    newnode->next=head;
    head=newnode;
    cout<<endl<<"Inserted head"<<endl<<endl;
}
void delete_position(Node *head,int pos)
{
    Node* tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<endl<<"Invalid position"<<endl<<endl;
            return;
        }
    }
    if(tmp->next==NULL)
    {
        cout<<endl<<"Invalid position"<<endl<<endl;
        return;
    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}
void delete_head(Node* &head)
{
    if(head==NULL)
    {
        cout<<endl<<"Head is not available"<<endl<<endl;
        return;
    }
    Node* deleteNode= head;
    head=head->next;
    delete deleteNode;
    cout<<"Head deleted";
}
//reverse linklist
void reverse_linklist(Node* rev)
{
    if(rev==NULL)
    return;
    reverse_linklist(rev->next);
    cout<<rev->val<<" ";
}
void sort_linklist(Node* head)
{
    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}
int main()
{
    Node* head= NULL;
    while(true)
    {
        cout<<"option 1 : Insert at tail"<<endl;
        cout<<"option 2 : Print linked list"<<endl;
        cout<<"option 3 : Insert at any position"<<endl;
        cout<<"option 4 : Insert at head"<<endl;
        cout<<"option 5 : Delete position"<<endl;
        cout<<"option 6 : Delete head"<<endl;
        cout<<"option 7 : Print reverse order"<<endl;
        cout<<"option 8 : Sort linklist"<<endl;
        cout<<"option 9 : Terminate"<<endl;
        int optn;
        cin>>optn;
        if(optn==1)
        {
            cout<<"Enter your value: ";
            int val;
            cin>>val;
            insert_tail(head,val);
        }
        else if(optn==2)
        {
            print_linklist(head);
        }
        else if(optn==3)
        {
            int pos,val;
            cout<<"enter position: ";
            cin>>pos;
            cout<<"enter value: ";
            cin>>val;
            if(pos==0)
            {
                insert_head(head,val);
            }
            else
            {
                insert_any_pos(head,pos,val);
            }
        }
        else if(optn==4)
        {
            cout<<"enter your head value:";
            int val;
            cin>>val;
            insert_head(head,val);
        }
        else if(optn==5)
        {
            cout<<"enter your position to delete:";
            int pos;
            cin>>pos;
            if(pos==0)
            {
                delete_head(head);
            }
            else
            {
                delete_position(head,pos);
            }
        }
        else if(optn==6)
        {
            delete_head(head);
        }
        else if(optn==7)
        {
            cout<<"Your reversed linklist : ";
            reverse_linklist(head);
            cout<<endl<<endl;
        }
        else if(optn==8)
        {
            cout<<"Your linklist is sorted"<<endl;
            sort_linklist(head);
        }
        else if(optn==9)
        {
            break;
        }
    }
    return 0;
}