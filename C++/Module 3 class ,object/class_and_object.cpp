#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Student shihab;
    shihab.roll=11;
    shihab.cls=13;
    shihab.section='D';
    char x[100]="Shihab";
    strcpy(shihab.name,x);

    Student emon;
    emon.roll=03;
    emon.cls=13;
    emon.section='D';
    char e[100]="Emon";
    strcpy(emon.name,e);

    cout<<emon.section;
    
    return 0;
}