#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    int cls;
    char sectn;
    student(char *n,int r,int c,int s)
    {
        strcpy(name,n);
        roll=r;
        cls=c;
        sectn=s;
    }
};
int main()
{
    student shihab("Shihab Shariar",11,13,'D');
    student emon("Emon Hossain",3,13,'D');

    cout<<shihab.name<<endl;
    cout<<shihab.roll<<endl;
    cout<<shihab.cls<<endl;
    cout<<shihab.sectn<<endl;

    cout<<emon.name<<endl;
    cout<<emon.roll<<endl;
    cout<<emon.cls<<endl;
    cout<<emon.sectn;
    return 0;
}