#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin,sentence);
    string word;
    stringstream ss(sentence);

    map<string,int>mp;

    while(ss>>word)
    {
        mp[word]++;
    }
    //kon word kotobar ashse seta dekhar jonno
    // for(auto it=mp.begin();it!=mp.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    cout<<mp["cricket"]<<endl; //jekono word er count ber korte

    return 0;
}