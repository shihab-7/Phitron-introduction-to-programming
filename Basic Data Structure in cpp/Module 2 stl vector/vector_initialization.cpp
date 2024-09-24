#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    //type 2 vector<int> v(5);
    //type 3 vector<int> v(5,10);
    /*type 4 vector<int>v2(5,100);
             vector<int>v(v2);*/
    //type 5 vector<int>v={1,5,7};
    /*type 6 int ar[6]={1,3,4,5,2,6};
             vector<int>v(ar,ar+6);*/

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size();
    return 0;
}