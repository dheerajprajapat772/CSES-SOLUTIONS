#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    int t;
    cin >> t;
    while (t--)
    {
        long long w, h;
        cin >> w >> h;
 
        int k1;
        cin >> k1;
        vector<long long> arrw1(k1);
        for (int i = 0; i < k1; i++)
            cin >> arrw1[i];
 
        int k2;
        cin >> k2;
        vector<long long> arrw2(k2);
        for (int i = 0; i < k2; i++)
            cin >> arrw2[i];
 
        int k3;
        cin >> k3;
        vector<long long> arrh1(k3);
        for (int i = 0; i < k3; i++)
            cin >> arrh1[i];
 
        int k4;
        cin >> k4;
        vector<long long> arrh2(k4);
        for (int i = 0; i < k4; i++)
            cin >> arrh2[i];
 
        long long max_wid = arrw1[k1 - 1] - arrw1[0];
        max_wid = max(max_wid, arrw2[k2 - 1] - arrw2[0]);
        max_wid*=h;
 
        long long max_hei = arrh1[k3 - 1] - arrh1[0];
        max_hei = max(max_hei, arrh2[k4 - 1] - arrh2[0]);
        max_hei*=w;
 
        cout << max(max_hei,max_wid)<<endl;;
 
    
    }
}