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
    public: //operator overloading function
        bool operator()(student a, student b)
        {
            if(a.marks > b.marks) return true;
            else if(a.marks < b.marks) return false;
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

    for(int i=0;i<n;i++)
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        student obj(name,roll,marks);
        pq.push(obj);
    }
    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }
    return 0;
}