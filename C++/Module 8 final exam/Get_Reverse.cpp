#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string nm;
    int cls;
    char sec;
    int m_marks;
    int eng_marks;

};
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].sec>>a[i].m_marks>>a[i].eng_marks;
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].m_marks<<" "<<a[i].eng_marks;
        cout<<endl;
    }
    return 0;
}