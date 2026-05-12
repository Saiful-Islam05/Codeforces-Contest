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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int boro=0,cnt=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                cnt++;
                boro=max(cnt,boro);

            }
            else
            {
                cnt=0;

            }
        }
       cout<<boro<<endl;

    }

    return 0;
}

