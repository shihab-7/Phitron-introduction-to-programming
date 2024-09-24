#include<bits/stdc++.h>
using namespace std;
namespace data
{
    int roll=11;
    string name= "Shihab";
    void hello()
    {
        cout<<"hello world";
    }
}
using namespace data;
int main()
{
    //cout<<data::name; 
    /*using namespace na korle 
    eivabe (::) initialize kora lage*/
    cout<<name<<endl;// using namespace add korle simple
    /*but 2,3 ta namespace aksathe creat korle vitorer variable
     name alada dite hoy */
     data::hello(); // function call 
    return 0;
}