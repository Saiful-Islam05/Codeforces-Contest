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
        int cnt=0,lzo=1e7+123,loz=1e7+123,oneone=1e7+123;
        int n,m,result=0,result1=0,fresult=0,test=0,test1=0,test2=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>m>>s;
            for(int j=0; j<2; j++)
            {
                if(s=="01")
                {
                    lzo=min(lzo,m);

                }
                else if(s=="10")
                {
                    loz=min(loz,m);

                }
                else if(s=="11")
                {
                    oneone=min(oneone,m);

                }

            }
        }
        result=lzo+loz;
        result1=oneone;
        fresult=min(result,result1);
        if(fresult>=1e7+123)
        {
            fresult=-1;
        }

        cout<<fresult<<endl;

    }
    return 0;
}

