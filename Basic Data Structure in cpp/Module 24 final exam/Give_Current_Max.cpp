#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int roll;
        int marks;
    student(string name, int roll, int marks)
    {
        this->marks=marks;
        this->roll=roll;
        this->name=name;
    }

};
class cmp
{
    public:
        bool operator()(student a, student b)
        {
            if(a.marks > b.marks) return false;
            else if(a.marks < b.marks) return true;
            else
            {
                if(a.roll > b.roll)
                 return true;
                else
                 return false;
            }
        }
};
int main()
{
    int n;
    cin>>n;
    priority_queue<student,vector<student>,cmp>pq;
    while(n--)
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        student details(name,roll,marks);
        pq.push(details);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int t;
        cin>>t;
        if(t==0)
        {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            student details(name,roll,marks);
            pq.push(details);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if(t==1)
        {
            if(!pq.empty())
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else
                cout<<"Empty"<<endl;
        }
        else if(t==2)
        {
            if(!pq.empty())
            {   
                pq.pop();
                if(!pq.empty())
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
                else
                cout<<"Empty"<<endl;
            }
            else
                cout<<"Empty"<<endl;
        }
        
    }
    return 0;
}