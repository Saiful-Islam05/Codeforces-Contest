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
        int cnt=0,lzo=1e5+123,loz=1e5+123,oneone=1e5+123;
        int n,m,result=0,result1=0,fresult=0,test=0,test1=0,test2=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>m>>s;
            for(int j=0; j<2; j++)
            {
                if(s[j]=='0'&&s[j+1]=='1')
                {
                    lzo=min(lzo,m);
                }
                else if(s[j]=='1'&&s[j+1]=='0')
                {
                    loz=min(loz,m);
                }
                else if(s[j]=='1'&&s[j+1]=='1')
                {
                    oneone=min(oneone,m);
                }
            }
        }
            result=lzo+loz;
            result1=oneone;
            fresult=min(result,result1);
            if(fresult>=1e5+123)
            {
                fresult=-1;
            }
            cout<<fresult<<endl;
    }
    return 0;
}
