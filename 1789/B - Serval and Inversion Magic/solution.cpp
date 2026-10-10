#include <bits/stdc++.h>
using namespace std;
 
bool isPalindrome(string &s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; ++i)
    {
        if (s[i] != s[n - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}
 
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
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            else
            break;
        }
        if(start>=end)
        {
            cout<<"YES"<<endl;
            continue;
        }
        while(start<end)
        {
            if(s[start]!=s[end])
            {
                start++;
                end--;
            }
            else
            {
                break;
            }
        }
        while(start<end)
        {
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            else
            break;
        }
        if(start>=end) 
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}