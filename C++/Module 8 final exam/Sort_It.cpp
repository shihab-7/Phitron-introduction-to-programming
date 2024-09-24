#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string nm;
    int cls;
    char sec;
    int s_id;
    int m_marks;
    int eng_marks;

};
bool comp(student& x,student& y)
{
    int tm_for_x=x.m_marks+x.eng_marks;
    int tm_for_y=y.m_marks+y.eng_marks;
    if(tm_for_x!=tm_for_y)
    {
        return tm_for_x>tm_for_y;
    }
    else
    {
        return x.s_id<y.s_id;
    }
}
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].sec>>a[i].s_id>>a[i].m_marks>>a[i].eng_marks;
    }
    sort(a,a+n,comp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].s_id<<" "<<a[i].m_marks<<" "<<a[i].eng_marks;
        cout<<endl;
    }
    return 0;
}