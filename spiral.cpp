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
    int layer;
    cin>>layer;

    // vector<vector<long long>> spiral (layer, vector<long long>(layer));

    // for(int i= 0; i<layer; i++)
    // {
    //     for(int j = 0; j<layer; j++)
    //     {

    //         long long  y = i+1;
    //         long long x = j+1;

    //         long long  k = max(x,y);
    //         long long p = (k-1)*(k-1);
            

    //         long long value;

    //         if(k%2 == 0)
    //         {
    //             if(y == k)
    //                 value = k*k - (x-1);
    //             else    
    //                 value = p + x;
    //         }
    //         else 
    //         {
    //             if(x == k )
    //                 value = k*k -(y-1);
    //             else    
    //                 value = p+y;
    //         }
    //         spiral[i][j] = value;
    //     }
    // }

    // for(int i = 0; i<spiral.size(); i++)
    // {
    //     for(int j = 0; j<spiral[i].size(); j++)
    //     {
    //         cout<<spiral[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int t; 
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;

        gettt(x,y);

    }
}