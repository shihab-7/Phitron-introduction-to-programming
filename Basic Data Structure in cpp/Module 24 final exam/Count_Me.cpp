#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string a;
        getline(cin,a);
        string word;
        stringstream ss (a);
        map<string,int> m;
        int mx=0;
        string z;
        while(ss >> word)
        {
            m[word]++;
            if(m[word] > mx)
            {
                mx=m[word];
                z=word;
            }
        }
        cout<<z<<" "<<mx<<endl;

    }
    return 0;
}