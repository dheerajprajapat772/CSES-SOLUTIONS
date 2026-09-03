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
 
        stack<char>st;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                
            }
            if(s[i]==')')
            {
                if( !st.empty() && st.top()=='(')
                {
                    st.pop();
                    count+=2;
                }
            }
        }
        cout<<(n-count)/2<<endl;
        
    }
}