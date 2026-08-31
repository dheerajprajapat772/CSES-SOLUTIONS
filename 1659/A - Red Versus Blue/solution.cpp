#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,r,b;
        cin>>n>>r>>b;
        string s;
        while(b>0)
        {
            s+='R';
            s+='B';
            b--;
            r--;
        }
        if(r>0)
        {
            s+='R';
            r--;
        }
 
        
        while(1)
        {
            // cout<<"chala h"<<endl;
            // cout<<"s is "<<s<<endl;
            // cout<<"r is "<<r<<endl;
            // cout<<"b is "<<b<<endl;
            if(r==0) break;
            int out=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='B')
                {
                    s.insert(i+1, 1, 'R');
                    r--;
                    if(r==0)
                    {
                        out=1;
                        break;
                    }
                }
            }
            if(out==1)
            break;
 
            if(r>0)
            {
                s='R'+s;
                r--;
                if(r==0) break;
            }
        }
        cout<<s<<endl;
    }
}