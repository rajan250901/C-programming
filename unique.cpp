#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ele;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        v.push_back(ele);
    }
    vector<int> arr={};
    int t=0;
    int f=-1,count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]==v[i])
            {
                f++;
            }
        }
        count++;
        if(f==-1 && count==1)
        {
            arr.push_back(v[i]);
        }
        count=0;
        f=-1;
    }
    cout<<"size  : " <<arr.size();
    for(int lt=0;lt<arr.size();lt++)
    {
       // cout<<arr[lt]<<" ";
    }
    return 0;
}