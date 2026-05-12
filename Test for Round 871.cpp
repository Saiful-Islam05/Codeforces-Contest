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
    int n,m,result=0,result1=0,fresult=0;
    cin>>n;
    m = n; // initialize m to n
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>m>>s; // update m inside the loop
        for(int j=0;j<2;j++)
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
            else
            {
                cnt++;
            }
        }
    }
    if(cnt==n) // use n instead of m
    {
        cout<<-1<<endl;
    }
    else
    {
        result=lzo+loz;
        result1=oneone;
        fresult=min(result,result1);
        cout<<fresult<<endl;
    }
}
}
