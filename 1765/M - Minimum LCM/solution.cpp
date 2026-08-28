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
        int maxi = -1;
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << endl;
            continue;
        }
        else
        {
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    maxi = n / i;
                    break;
                }
            }
            if (maxi == -1)
            {
                cout << 1 << " " << n - 1 << endl;
            }
            else
                cout << maxi << " " << n - maxi << endl;
        }
    }
}