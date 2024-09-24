#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    char name[100];
    float height;
    int age;
    Person(char *n,float t,int a)
    {
        strcpy(name,n);
        height=t;
        age=a;
    }
};
int main()
{
    Person *p1=new Person("Shihab Shariar",5.6,21);
    Person *p2=new Person("Robiul Islam",5.5,22);
    if(p1->age>p2->age)
    cout<<p1->name;
    else
    cout<<p2->name;
    return 0;
}