#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    const int N=16;
    int idx[N];
    for(int i=0;i<N;i++)
        idx[i]= -1;
    int mn = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]== -1)
            idx[arr[i]]=i;
        else
            mn= min(mn,idx[arr[i]]);
    }
    if(mn==INT_MAX)
        cout<<"ans = -1";
    else
        cout<<"ans = "<<mn;
    return 0;
}