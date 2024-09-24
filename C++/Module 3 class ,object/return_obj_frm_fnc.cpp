#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    char sec;
    char name[100];
    student( int r,int c,int s, char *n)
    {
        roll=r;
        cls=c;
        sec=s;
        strcpy(name,n);
    }
};

student details()
{
    char n[100]="Emon Hossain";
    student r3(3,13,'D',n);
    return r3;
}

int main()
{
    student shihab(11,13,'D',"Shihab Shariar");
    student emon(3,13,'D',"Emon Hossain");

    student r3=details();
    cout<<emon.name<<endl;
    cout<<emon.roll<<endl;
    cout<<emon.cls<<endl;
    cout<<emon.sec;

    return 0;
}