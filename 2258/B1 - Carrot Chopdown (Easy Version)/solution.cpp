#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, out = 0;
        cin >> n >> m;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int maxi = 0;
 
        sort(arr.begin(), arr.end());
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        int count = 0;
        for (int i = 1; i <= m; i++)
        {
            int ans = 0;
 
            auto it = lower_bound(arr.begin(), arr.end(), i);
            if (it != arr.end())
            {
                int index = it - arr.begin();
                ans += n - index;
            }
 
            int target = 2 * i;
            if (freq.find(target) != freq.end())
            {
                ans += freq[target];
            }
            maxi = max(maxi, ans);
        }
        cout << maxi << endl;
    }
}