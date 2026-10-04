#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
 
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        int zero=0,one=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') zero++;
            else one++;
        }
        if(abs(one-zero) >=3)
        {
            cout<<-1<<endl;
            continue;
        }
        int zero_dlt=0,onedlt=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                if(s[i]=='0') zero_dlt++;
                else onedlt++;
            }
        }
        if(abs(onedlt-zero_dlt)<=1)
        {
            cout<<onedlt+zero_dlt<<endl;
        }
        else
        {
            int maxi=max(zero_dlt,onedlt);
            cout<<2*maxi-1<<endl;
        }
    }    
        
}