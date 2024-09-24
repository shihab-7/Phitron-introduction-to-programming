#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>lst={100,200,500,300,400,200,300,300,300};
    //lst.remove(300);
    //lst.sort();//soto theke boro
    //boro theke soto sort
    //lst.sort(greater<int>());
    //lst.unique();
    // unique function use korar jonno list obossoi sorted thakte hobe
    //lst.reverse(); //list er buildin function
    for(int val: lst)
    {
        cout<<val<<" ";
    }
     cout<<endl;
    //list er jkono posion er value access korar jonno dereference korte hoy
    cout<<*next(lst.begin(),5)<<endl;
    return 0;
}