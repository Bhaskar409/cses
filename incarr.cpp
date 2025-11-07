#include<bits/stdc++.h>
using namespace std;


void getdone(vector<long long>& a)
{
    long long move = 0;

    int i = 1;

    while(i<a.size())
    {
        if(a[i] < a[i-1])
        {
            move += (a[i-1] - a[i]);
            a[i] = a[i-1];
        }
        else
            i++;
    }
    cout<<move<<endl;
}


int main()
{
    long long n;
    cin>>n;
    vector<long long> a(n,0);

    for(int i = 0;i< a.size();i++)
    {
        long long c = 0;
        cin>>c;
        a[i] = c;
    }
    
    getdone(a);
}