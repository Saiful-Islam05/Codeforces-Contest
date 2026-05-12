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
        int n,Hieven=0,LowOdd = 0;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }

        for(int i=0;i<n;i++)
        {
            if(A[i]%2==0)
            {
                if(A[i]>Hieven)
                {
                    Hieven=A[i];
                }
            }
            Mihai = Mihai+Hieven;
            if(A[i]%2==1)
            {
                if(A[i])
            }
        }
    }

    return 0;
}

