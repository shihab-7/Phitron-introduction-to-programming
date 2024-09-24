#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string nm;
    int cls;
    char sec;
    int s_id;
};
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].sec>>a[i].s_id;
    }
    for(int i=0;i<n/2;i++)
    {
        swap(a[i].s_id,a[n-i-1].s_id);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].s_id;
        cout<<endl;
    }
    return 0;
}