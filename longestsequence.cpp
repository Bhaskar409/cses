#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "";
    cin>>s;
    
    int maxlen = 0;
    int len = 1;

    if(s.size() == 1)
    {
        cout<<1;
        return 0;
    }

    for(int i = 1 ;i<s.size();i++)
    {
        if(s[i] == s[i-1])
        {
            len++;
        }
        else
        {
            len = 1;
        }
        maxlen = max(maxlen,len);
    }
    cout<<maxlen;
}