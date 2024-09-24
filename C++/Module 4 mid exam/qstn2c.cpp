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
    Person *shihab=new Person("Shihab Shariar",5.6,21);
    cout<<shihab->name<<endl;
    cout<<shihab->height<<endl;
    cout<<shihab->age;
    return 0;
}