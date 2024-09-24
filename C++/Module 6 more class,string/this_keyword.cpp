#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int phy_mrk;         
    int chem_mark;
    student(string name,int roll,int phy_mrk,int c)
    {
       this->name=name;/*class er initialization r constructor
        er initialization same thakar jonno this use kora hoy ,
       this akta pointer er moto kaj kore sei jonne 
       (->) diya dereference kore use korte hoy*/
       this->roll=roll;
       this->phy_mrk=phy_mrk;
        chem_mark=c;
    }

};
int main()
{
    student one("Sifat",7,80,85);
    cout<<one.name<<" "<<one.phy_mrk<<" "<<one.chem_mark;
    return 0;
}