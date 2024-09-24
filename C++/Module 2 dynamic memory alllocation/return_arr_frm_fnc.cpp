#include<bits/stdc++.h>
using namespace std;
int* arr()
{
    //int x[5]; // if we define this in stack or static memory the value will lost 
    int *x=new int[5]; //make space in dynamic memory to get this date for ever
    for(int i=0;i<5;i++)
    {
        cin>>x[i];
    }
    return x;
}
int main()
{
    int *a=arr(); //after returning value the function don't delete the value of array
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}