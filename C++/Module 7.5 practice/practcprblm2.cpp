#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int roll;
        int mark;

};
int main()
{
    int n;
    cin>>n;
    student x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i].name>>x[i].roll>>x[i].mark;
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<x[i].name<<" "<<x[i].roll<<" "<<x[i].mark;
        cout<<endl;
    }
    return 0;
}