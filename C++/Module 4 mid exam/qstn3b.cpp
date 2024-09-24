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
    char n[100]="Shihab Shariar"; //function
    student r3(11,13,'D',n);
    return r3;
}
int main()
{
    student s1(11,13,'D',"Shihab Shariar");
    student det=details(); 
    /*returned static object
                            successfully print it*/ 
    cout<<det.name<<endl;
    cout<<det.roll<<endl;
    cout<<det.sec;
    return 0;
}