#include<bits/stdc++.h>
using namespace std;

int sol(vector<int>& arr,int i,int j)
{
    int mini = INT_MAX;
    for(int k = i; k<=j; k++)
    {
        if(arr[k] < mini)
            mini = arr[k];
    }
    return mini;
}
 
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;

    int x,a,b,c;
    cin>>x>>a>>b>>c;

    vector<int> arr(n);
    arr[0] = x;
    for(int i = 1; i<n; i++)
    {
        arr[i] = ((a*arr[i-1]) + b) % c;
    }
    // vector<int> res;

    int ans = 0;

    int i = 0;
    int j = k-1;

    while(j<n)
    {
        int tem = sol(arr,i,j);
        ans ^= tem;
        i++;
        j = i + k-1;
    }
    // int ans = res[0];

    // for(int y: res)
    //     ans ^= y;
    cout<<ans;
}