#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int roll;
        int mark;
};
bool comp(student x,student y)
{
    if(x.mark!=y.mark)
    return x.mark>y.mark;
    else
    return x.roll<y.roll;
}
int main()
{
    int n;
    cin>>n;
    student d[n];
    for(int i=0;i<n;i++)
    {
        cin>>d[i].name>>d[i].roll>>d[i].mark;
    }
    sort(d,d+n,comp);
    for(int i=0;i<n;i++)
    {
        cout<<d[i].name<<" "<<d[i].roll<<" "<<d[i].mark;
        cout<<endl;
    }
    return 0;
}