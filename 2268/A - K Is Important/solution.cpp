#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>>k;
        long long arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        long long sum=0;
        int start=k-1,end=n-k;
        while(start!=n)
        {
            if(arr[start]>arr[end])
            {
                sum+=arr[start];
                arr[start]=0;
            }
            else
            {
                sum+=arr[end];
                arr[end]=0;
            }
            start++;
            end--;
        }
        cout<<sum<<endl;
        
    }
 
}