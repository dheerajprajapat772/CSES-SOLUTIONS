#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
 
        int start=0,end=n-1;
        while(start<end)
        {
            if(s[start]=='0' && s[end]=='1')
            {
                start++;
                end--;
            }
            if(s[start]=='1' && s[end]=='0')
            {
                start++;
                end--;
            }
            if(s[start]==s[end])
            {
                break;
            }
 
        }
        if(start==end) cout<<1<<endl;
        else if(start>end) cout<<0<<endl;
        else
        {
            cout<<end-start+1<<endl;
        }
    }
}