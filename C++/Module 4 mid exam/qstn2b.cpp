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
        roll=r;             //here student()is the constructor
        cls=c;
        sectn=s;
    }
};
int main()
{
    /*here we assigned all the objects easily with 
    the help of constructor*/
    student shihab("Shihab Shariar",11,13,'D');
    cout<<shihab.name<<endl;
    cout<<shihab.roll<<endl;
    cout<<shihab.cls<<endl;
    cout<<shihab.sectn<<endl;
    return 0;
}