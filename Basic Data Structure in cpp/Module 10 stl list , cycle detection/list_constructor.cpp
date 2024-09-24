#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist(10,5);

//everything is like vector property
//   we can copy data from vector,list and arry
/*to copy array : int a[5]={1,2,3,4,5}
                  list<int>lst(a,a+5)*/
/*to copy vector: vector<int>v(10,5)
                  list<int>lst(v.begin,v.end)*/
/*to copy list  : list<int>lst1(10,5)
                   list<int>lst2(lst1)*/

    cout<<mylist.size()<<endl;
    for(auto it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<" ";//if we need pointer we will run this loop
    }
    cout<<endl;
//to get the value just not the address we can use range based for loop
for(int val: mylist)
{
    cout<<val<<" ";//if we need just values we'll use this loop
}
    return 0;
}