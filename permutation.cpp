#include<bits/stdc++.h>
using namespace std;

bool valid(vector<long long>& a)
{
    long long n = a.size();
    for(int i = 1; i<n; i++)
    {
        if( abs(a[i]-a[i-1]) == 1 )
        {
            return false;
        }
        
    }
    return true;
}


vector<long long> nxtper(vector<long long>& a)
{
    int ind = -1;
    long long n = a.size();

    for(int i = n-2; i>= 0; i--)
    {
        if(a[i] < a[i+1])
        {
            ind = i;
            break;
        }
    }
    if(ind == -1)
    {
        reverse(a.begin(),a.end());
        return a;
    }

    for(int i = n-1; i>ind; i--)
    {
        if(a[i]>a[ind])
        {
            swap(a[i],a[ind]);
            break;
        }
    }

    reverse(a.begin() + ind+1, a.end());

    return a;
}


//this question can easily solve with little observation 
//printing first the even then odd as (even - odd != 1)!!
int main()
{
    long long n;
    cin>>n;


    if(n==2 || n== 3)
    {
        cout<<"NO SOLUTION";
        return 0;
    }

    for(int i = 2; i<=n; i += 2)
        cout<<i<<" ";
    for(int j = 1; j<=n; j +=2)
        cout<<j<<" ";

    // vector<long long> a(n);  //this approach will give TLE cause the mul will increase exponentially whn n is high!
    // for(int i = 0; i<n; i++)
    // {
    //     a[i] +=  i+1;
    // }

    // long long mul = 1;
    // for(int i = 2; i<=n; i++)
    // {
    //     mul = mul*i;
    // }

    // for(int i = 0; i<mul; i++)    
    // {
    //     if(valid(a))
    //     {
    //         for(long long x:a)
    //             cout<<x<<" ";
            
    //         return 0;
    //     }
    //     nxtper(a);
    // }

    // cout<<"NO SOLUTION";
}