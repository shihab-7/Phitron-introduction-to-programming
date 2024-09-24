#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int>&v,int x)
{
        v.push_back(x);
        int crnt_indx = v.size()-1;
        while(crnt_indx != 0)
        {
            int parent_indx = (crnt_indx - 1) / 2;
            if(v[parent_indx] < v[crnt_indx])
                swap(v[parent_indx] , v[crnt_indx]);
            else
                break;
            crnt_indx = parent_indx;
        }
}
void delete_heap(vector<int> &v)
{
    v[0]=v[v.size()-1];
    v.pop_back();
    int current=0;
    while(true)
    {
        int lft_indx = current * 2 + 1;
        int right_indx = current * 2 + 2;
        int last_indx = v.size() - 1;
        if(lft_indx <= last_indx && right_indx <= last_indx)
        {
            //left right duitai asa
            if(v[lft_indx] >= v[right_indx] && v[lft_indx] > v[current])
            {
                swap(v[lft_indx],v[current]);
                current = lft_indx;
            }
            else if(v[right_indx] >= v[lft_indx] && v[right_indx] > v[current])
            {
                swap(v[right_indx],v[current]);
                current = right_indx;
            }
            else
            {
                break;
            }
        }
        else if(lft_indx <= last_indx)
        {
            //left asa sudhu
            if(v[lft_indx] > v[current])
            {
                swap(v[lft_indx],v[current]);
                current = lft_indx;
            }
            else
            {
                break;
            }

        }
        else if(right_indx <= last_indx)
        {
            //right asa sudhu
            if(v[right_indx] > v[current])
            {
                swap(v[right_indx],v[current]);
                current = right_indx;
            }
            else
            {
                break;
            }

        }
        else
        {
            break;
        }
    }
}
void print_heap(vector<int> v)
{
    for(int val: v) cout<<val<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insert_heap(v,x);
    }
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    return 0;
}