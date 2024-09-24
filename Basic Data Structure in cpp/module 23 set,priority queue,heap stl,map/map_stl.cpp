#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    //eivabe input neowa jay pair banay banay
    // mp.insert({"shakib al hasan",75});
    // mp.insert({"tamim ikbal",19});
    // mp.insert({"shmim",79});

    //abr eivabeo kora jay
    mp["shakib"]=79;
    mp["akib"]=100;
    mp["tamim"]=7;   //input complexity O(logN)

    for(auto it=mp.begin();it!=mp.end();it++)
    {
       cout<<it->first<<" "<<it->second<<endl; // per pair ber korar jonno O(logN)
    } 
    //eita use kori na 
    cout<<mp["shmim"]<<endl;// data na thakle 0 dey output

    //ashol valu e 0 hoile .count("data") diye check kore dekhte hoy
    if(mp.count("shmim"))
    {
        cout<<"asa";
    }
    else cout<<"nai";



    return 0;
}