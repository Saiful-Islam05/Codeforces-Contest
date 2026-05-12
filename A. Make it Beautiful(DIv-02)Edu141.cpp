#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,cnt=0,x=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i]!=cnt)
            {
                x=x+1;
            }
        }
    }


    return 0;
}
