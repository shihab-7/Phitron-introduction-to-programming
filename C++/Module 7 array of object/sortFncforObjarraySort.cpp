#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    string name;
    int age;
    string university;
};
bool compare(student x,student y) 
/*int,char,string baad a onno data type sort er jonno
sort function use korte hoile bool function banaite hoy*/
{
    if(x.age<y.age) return true;
    else return false;

}
int main()
{
    student a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i].roll;
        cin.ignore(); 
        getline(cin,a[i].name);
        cin>>a[i].age;
        getchar();
        getline(cin,a[i].university);
    }
    //sort function
    sort(a,a+3,compare); /*bool function k sort er moddhe 
    pass korle bool er condition onusare sort hoy*/
    for(int i=0;i<3;i++)
    {
        cout<<a[i].roll<<" "<<a[i].name<<" "<<a[i].age<<endl;
        cout<<a[i].university<<endl;
        //age er vittite sort kora hoise object gula k
    }
    
    return 0;
}