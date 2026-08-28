#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>d)
        {
            cout<<-1<<endl;
            continue;
        }
        long count=0;
        //first we move diagnoaly in x, y;
        count=d-b;  //in y
        a+=count;  //in x
        if(a<c)
        {
            cout<<-1<<endl;
            continue;
        }
        count+=a-c; //in backward direction
        cout<<count<<endl;
    }
}