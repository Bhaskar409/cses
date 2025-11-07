#include<bits/stdc++.h>
using namespace std;


void noferri(vector<long long>& a, int x)
{
    sort(a.begin(),a.end());

    long long cnt = 0;

    long long  i = 0;
    long long j = a.size()-1;

    while(i<=j)
    {
        // if(a[i] + a[j] > x)
        // {
        //     cnt++;
        //     j--;
        // }
        // else if(a[i] + a[j] < x)
        // {
        //     cnt++;
        //     i++;
        // }
        // else 
        // {
        //     cnt++;
        //     i++;
        //     j--;
        // }

        if(a[i] + a[j] <= x)
            i++;
        
        j--;
        cnt++;
    }
    cout<<cnt;
}


int main()
{
    long long n;
    cin>>n;

    long long x;
    cin>>x;

    vector<long long> child(n);
    for(int i = 0; i<n; i++)
    {
        int t ;
        cin>>t;
        child[i] = t;
    }

    noferri(child,x);
}