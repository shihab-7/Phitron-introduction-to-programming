#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int phy_mrk;         /*class er vitor contractor sara
                         onno function o banano jay*/
    int chem_mark;
    student(string nm,int r,int p,int c)
    {
        name=nm;
        roll=r;
        phy_mrk=p;
        chem_mark=c;
    }
    void info() //kono kisu return kortese na
    {
        cout<<name<<" "<<roll<<endl;
    }
    int result() // integer return kore
    {
        return phy_mrk+chem_mark; //sudhu return korse
    }

};
int main()
{
    student one("Sifat",7,80,85);
    one.info();  /* class ei function banay rakha
     silo just object define kore call kora hoise*/
    cout<<one.result(); /*return receive kore print na
     korle dekha jaito na*/
    return 0;
}