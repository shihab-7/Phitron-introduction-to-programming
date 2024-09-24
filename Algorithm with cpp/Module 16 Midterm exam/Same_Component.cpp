#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
const int N=1005;
int n,m;

char mat[N][N];
bool visited[N][N];
vector<pii>direction={{0,-1},{0,1},{-1,0},{1,0}};
bool isValid(int i,int j,int n,int m)
{
    return (i>=0 && i<n && j>=0 && j<m);
}
void dfs(int si,int sj)
{
    visited[si][sj]=true;
    for(auto val: direction)
    {
        int new_i= si+val.first;
        int new_j= sj+val.second;
        if(isValid(new_i,new_j,n,m) && !visited[new_i][new_j] && mat[si][sj]!='-')
        {
            dfs(new_i,new_j);
        }
    }
}

int main()
{
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    int si,sj,di,dj;
    cin>>si>>sj>>di>>dj;
    dfs(si,sj);
    if(visited[di][dj])
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
    return 0;
}