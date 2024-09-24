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
    for(int i=0;i<2;i++) /*using selection sort ,sort
     age smaller to greater*/
    {
        for(int j=i+1;j<3;j++)
        {
            if(a[i].age>a[j].age)
            swap(a[i],a[j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<a[i].roll<<" "<<a[i].name<<" "<<a[i].age<<endl;
        cout<<a[i].university<<endl;
    }
    
    return 0;
}