#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    long long sum ;
    sum = n*(n+1)/2;

    long long sum1=0;

    for(int i = 1 ; i<=n-1; i++)
    {
        long long c = 0;
        cin>>c;
        sum1 += c;

    }
    long long rslt;
    rslt = sum - sum1;
    cout<<rslt;
    
}