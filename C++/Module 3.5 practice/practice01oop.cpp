#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
	int roll;
	char section;
	int math_marks;
	int cls;
    student(char *n,int r,char s, int mn,int c)
    {
        strcpy(name,n);
        roll=r;
        section=s;
        math_marks=mn;
        cls=c;
    }
};
int main()
{
    student s1("Rasel",25,'D',80,13);
    student s2("Faria",23,'D',78,13);
    student s3("Momin",27,'D',81,13);
    int max=s1.math_marks;
    if(s2.math_marks>max)
    cout<<s2.name;
    if(s3.math_marks>max)
    cout<<s3.name;
    else
    cout<<s1.name;
    return 0;
}