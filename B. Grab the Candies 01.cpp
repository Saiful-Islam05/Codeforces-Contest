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
        int n,even=0,odd=0;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i]%2==0)
            {
                even+=A[i];
            }
            else
            {
                odd+=A[i];
            }
        }

        if(even>odd)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

