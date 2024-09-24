#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    string name;
    int age;
    string university; /*constructor banano hoy na 
    array object banano hoile*/
};
int main()
{
    student a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i].roll;
        cin.ignore();  /*input neowar somoy enter k char hisabe 
        neoway getchar enter newar jonno vul output ashe sei jonno
        getchar();othoba cin.ignore(); function use kora hoy oi
        extra enter ta rakhar jonno*/
        getline(cin,a[i].name);
        cin>>a[i].age;
        getchar();
        getline(cin,a[i].university);
    }
    for(int i=0;i<3;i++)
    {
        cout<<a[i].roll<<" ";
        cout<<a[i].name<<" ";
        cout<<a[i].age<<endl;
        cout<<a[i].university<<endl;
    }
    
    return 0;
}