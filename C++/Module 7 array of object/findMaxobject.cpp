#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    string name;
    int age;
    string university;
};
int main()
{
    student a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i].roll;
        cin.ignore(); 
        getline(cin,a[i].name);
        cin>>a[i].age;
        getchar();
        getline(cin,a[i].university);
    }
    student mx; //find whose age is greater
    mx.age=INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(a[i].age>mx.age)
        mx=a[i];
    }
    cout<<mx.roll<<" "<<mx.name<<" "<<mx.age<<endl;
    cout<<mx.university;
    return 0;
}