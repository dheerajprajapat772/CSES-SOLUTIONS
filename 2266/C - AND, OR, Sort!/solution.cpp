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
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero++;
            else
                one++;
        }
        if (s[0] == '1')
        {
            cout << zero << endl;
            continue;
        }
 
        int lone = 0;
        int rzero = zero;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                lone++;
            }
            else
            {
                rzero--;
            }
            ans = min(ans, lone + rzero);
        }
 
        cout << ans << endl;
    }
}