#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;                   // decleared class
    int cls;
    char section;
};
int main()
{
    Student shihab;
    shihab.roll=11;
    shihab.cls=13;              // decleared object
    shihab.section='D';
    char x[100]="Shihab";
    strcpy(shihab.name,x);
    cout<<shihab.section;
    return 0;
}