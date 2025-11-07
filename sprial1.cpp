#include<bits/stdc++.h>
using namespace std;


void gettt(int x,int y)
{
    long long value;

    long long k = max(x,y);
    long long p = (k-1)*(k-1);

    if(k%2 == 0)
    {
        if(y == k)
        {
            value = k*k - (x-1);
        }
        else
        {
            value = p +y;
        }
    }
    else
    {
        if(x == k)
            value = k*k - (y-1);
        else
            value = p+x;
    }
    cout<<value;
}


int main()
{

    int t; 
    cin>>t;
    
    
    while(t--)
    {
        int x,y;
        cin>>x>>y;

        gettt(x,y);

    }
}