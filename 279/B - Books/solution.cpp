#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
 
    long long sum=0;
    int i=0;
    int maxi=0;
    for(int j=0;j<n;j++)
    {
        sum+=arr[j];
        while(sum>t)
        {
            sum-=arr[i];
            i++;
        }
        maxi=max(maxi,j-i+1);
 
    }
    cout<<maxi<<endl;
}