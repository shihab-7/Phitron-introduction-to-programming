#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
vector<int> adjlist[N]; //global vector map bananor jonno
int main()
{   
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v); //jodi directional hoy tahole sudhu akta push_back
        adjlist[v].push_back(u);// 2 ta push_back korte hoy jodi undirected hoy
    }

    for(int i=1;i<=n;i++)
    {
        cout<<"List "<<i<<" : ";
        for(int j : adjlist[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}