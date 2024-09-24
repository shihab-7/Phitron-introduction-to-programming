#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
const int N=105;
int level[N][N];
int visited[N][N];
vector<pii>direction={{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};

int n,m;

bool isValid(int i,int j,int n,int m)
{
    return (i>=0 && i<n && j>=0 && j<m);
}
void reset()
{
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                level[i][j]=0;
                visited[i][j]=false;
            }
        }
}
void bfs(int si,int sj,int n,int m)
{
    queue<pii>q;
    q.push({si,sj});
    visited[si][sj]=true;
    level[si][sj]=0;

    while(!q.empty())
    {
        pii position= q.front();
        int i= position.first;
        int j= position.second;
        q.pop();

        for(auto val: direction)
        {
            int new_i=i+val.first;
            int new_j=j+val.second;

            if(isValid(new_i,new_j,n,m) && !visited[new_i][new_j])
            {
                q.push({new_i,new_j});
                visited[new_i][new_j]=true;
                level[new_i][new_j]=level[i][j]+1;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;

        int ki,kj,qi,qj;

        cin>>ki>>kj>>qi>>qj;

        reset();

        bfs(ki,kj,n,m);

        if(!visited[qi][qj])
        cout<<-1<<endl;
        else
        cout<<level[qi][qj]<<endl;
    }
    return 0;
}