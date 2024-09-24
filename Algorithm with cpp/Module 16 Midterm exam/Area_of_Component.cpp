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
int dfs(int si,int sj)
{
    visited[si][sj]=true;
    int size=1;
    for(auto val: direction)
    {
        int new_i= si+val.first;
        int new_j= sj+val.second;
        if(isValid(new_i,new_j,n,m) && !visited[new_i][new_j] && mat[new_i][new_j]=='.')
        {
           size+=dfs(new_i,new_j);
        }
    }
    return size;
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
    int min_size=INT_MAX;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]=='.'&& !visited[i][j])
            {
                int size=dfs(i,j);
                min_size=min(min_size,size);
            }
        }
    }
    if(min_size==INT_MAX)
    cout<<-1<<endl;
    else
    cout<<min_size<<endl;
    return 0;
}