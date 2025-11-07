#include<bits/stdc++.h>
using namespace std;

void weiredalgo(long long n)
{
    if( n == 1)
    {
        cout<<1;
        return ;
    }
    do{
        cout<<n<<" ";

        if(n%2 == 0)
            n = n/2;
        else    
            n = n*3+1;
    }while(n != 1);
    cout<<1;

}

int main()
{
    long long n;
    cin>>n;

    weiredalgo(n);
}