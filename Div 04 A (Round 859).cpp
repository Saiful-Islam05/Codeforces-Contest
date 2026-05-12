#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a+b==c)
        {
            cout<<"+"<<endl;
        }
        else if(a-b==c)
        {
            cout<<"-"<<endl;
        }
    }
    return 0;
}
