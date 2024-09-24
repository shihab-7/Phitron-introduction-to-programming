#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int[3]; //allocate array a in dynamic memory
    for(int i=0;i<3;i++)
        cin>>a[i];

    int *b=new int[5];  //allocate array b in dynamic memory
    for(int i=0;i<5;i++)
        b[i]=a[i];     //copy array a in array b

    b[3]=20;
    b[4]=30; // add two new value in b array

    for(int i=0;i<5;i++)
        cout<<b[i]<<" "; //print the b array successfully

    cout<<endl;
    delete[] a; //delete the array a[5] from the dynamic memory
    for(int i=0;i<3;i++)
        cout<<a[i]<<" "; //check to confirm that array a is deleted
    return 0;
}