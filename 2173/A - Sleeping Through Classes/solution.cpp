#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
 
        int count=0;
        int i=0;
        while(i<n)
        {
            if(s[i]=='0')
            {
                count++;
            } 
            else
            {
                int finalindex;
                while(i<n)
                {
                    if(s[i]=='1')
                    {
                       finalindex=i+k;
                    }
                    if(i==finalindex)
                    break;
 
                    i++;
                }
            }
            i++;
        }
        cout<<count<<endl;
 
        
    }
}