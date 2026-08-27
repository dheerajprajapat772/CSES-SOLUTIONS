#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        n=n+2;
        vector<int>arr(n);
        arr[0]=0;
 
        for(int i=1;i<n-1;i++) cin>>arr[i];
 
        // fuel required at last station to go and came back;
        int fuel_req=x-arr[n-2];
        x+=fuel_req;
        arr[n-1]=x;
 
        int max_fuel=0;
        for(int i=0;i<n-1;i++)
        {
            max_fuel=max(max_fuel,arr[i+1]-arr[i]);
        }
        cout<<max_fuel<<endl;
 
    }
}