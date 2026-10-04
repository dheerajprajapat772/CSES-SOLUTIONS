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
        int arr[n];
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        vector<pair<int, int>> v;
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        for (auto &a : freq)
        {
            v.push_back({a.first, a.second});
        }
        int value=0,fr=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].second>fr)
            {
                fr=v[i].second;
                value=v[i].first;
            }
        }
        if(fr<=(n/2)+1)
        {
            cout<<sum<<endl;
            continue;
        }
        int unique=n-fr;
        unique+=2;
 
        fr=fr-unique;
        sum-=value*fr;
        cout<<sum<<endl;
        
    }
 
}