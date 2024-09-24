#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        s.insert(x);//o(logN)
    }
    //stl er sob itterator diye dekhte hoy
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }

/*set balenced binary tree diye toiri
jekono operation o(logN) a kore
automatic data soto theke borote sort kore 
dublicate value remove kore dey*/

//set dublicate value remove kore sort kore dey o(NlogN) a

//jekono value khujte .count(data) use kora hoy
if(s.count(10))
cout<<"yes";
else
cout<<"no";

    return 0;
}