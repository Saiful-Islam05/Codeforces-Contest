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
        int n,maxx=0;
        cin>>n;
        int A[n],B[n];
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>B[i];
        }
           maxx= max(A[0],n);
            cout<<maxx<<endl;
    }

    return 0;
}

