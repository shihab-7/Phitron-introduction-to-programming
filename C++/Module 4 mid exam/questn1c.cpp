#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int [5];  //creat space for array in dynamic memory
    for(int i=0;i<5;i++)
        cin>>a[i];
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    delete[] a; //delete to free heap memory
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    return 0;
}