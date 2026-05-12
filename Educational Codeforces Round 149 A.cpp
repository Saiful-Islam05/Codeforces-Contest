#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int x,k,cnt=0,ans=0;
        cin>>x>>k;
        vector<int> v;
        if(x%k!=0)
        {
            cout<<1<<endl<<x<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        }

    }

    return 0;
}

