#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long a,b,c;
        cin>>a>>b>>c;
 
        int sum=a+c;
 
        if(sum%(2*b)==0)
        {
            int rem=sum/(2*b);
            if((2*b*rem)==a+c)
            {
                cout<<"YES"<<endl;
                continue;
            }
        }
 
        sum=2*b-c;
 
        if(sum%a==0 && sum>0)
        {
            int rem=sum/a;
            if( 2*b==a*rem+c && rem!=0)
            {
                cout<<"YES"<<endl;
                continue;
            }
        }
 
        sum=2*b-a;
 
        if(sum%c==0 && sum>0)
        {
            int rem=sum/c;
            if(2*b==a+c*rem  && rem!=0)
            {
                cout<<"YES"<<endl;
                continue;
            }
        }
        cout<<"NO"<<endl;
    }
}