#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    char sec;
    char name[100];
    student( int r,int c,int s, char *n) //constructor
    {
        roll=r;
        cls=c;
        sec=s;
        strcpy(name,n);
    }
};
int main()
{
    //constractor thakle value likhte hoy;
    student *shihab= new student(11,13,'D',"Shihab Shariar");
    //na thakle just student *shihab=new student;

    cout<<shihab->name<<endl; // (.) er poriborte (->) ashe dynamic memory use korar jonne
    return 0;
}