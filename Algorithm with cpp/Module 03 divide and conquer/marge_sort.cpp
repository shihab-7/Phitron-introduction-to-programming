#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int left, int mid, int right)
{
    int n1 = mid-left+1;
    int n2 = right-mid;

    vector<int> leftarr(n1);
    vector<int> rightarr(n2);

    for(int i=0;i < n1;i++)
    {
        leftarr[i] = arr[left+i];
    }
    for(int j=0;j < n2;j++)
    {
        rightarr[j] = arr[mid+1+j];
    }

    int i=0,j=0, k = left;

    while(i < n1 && j < n2)
    {
        if(leftarr[i] <= rightarr[j])
        {
            arr[k] = leftarr[i];
            i++;
        }
        else
        {
            arr[k] = rightarr[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        arr[k] = leftarr[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = rightarr[j];
        j++;
        k++;
    }
}
void mrg_sort(vector<int> &arr , int left, int right)
{
    if(left < right)
    {
        int mid = left + (right - left)/2;

        mrg_sort(arr,left,mid);
        mrg_sort(arr,mid+1,right);

        merge(arr,left,mid,right);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> array;
    for(int i=0; i < n;i++)
    {
        int x;
        cin>>x;
        array.push_back(x);
    }
    mrg_sort(array,0,array.size()-1);
    for(int a : array)
    {
        cout<<a<<" ";
    }
    return 0;
}