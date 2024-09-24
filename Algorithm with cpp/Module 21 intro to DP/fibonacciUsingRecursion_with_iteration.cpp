#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n+1];
    a[0]=1;
    a[1]=1;
    for(int i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
//array te iteration akta approach
//loop n time cholar jonno complexity O(n) 
    cout<<a[n]<<endl;
    return 0;
}

/*top down --> recursion eita callstack a jayga ney
bottom up --> loop or iterative way but recursion er theke aktu better karon call stack a jayga 
ney na loop

dui khettere complexity same hoileo stack overflow hoye
recursion time limit or segmentation fault dite pare 

tobe recursion jana must karon recursive approach k
e iterative or loop approach a convert korte hoy*/