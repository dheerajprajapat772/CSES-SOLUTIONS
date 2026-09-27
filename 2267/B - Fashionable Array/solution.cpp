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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<int, int, greater<int>> freq;
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        vector<pair<int, int>> v;
        for (auto &p : freq)
        {
            v.push_back({p.first, p.second});
        }
 
        vector<int> ans;
        while (true)
        {
            bool done = true;
 
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i].second > 0)
                {
                    ans.push_back(v[i].first);
                    v[i].second--;
 
                    done = false;
                }
            }
            if (done)
                break;
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
 
        cout << '
';
    }
 
    return 0;
}