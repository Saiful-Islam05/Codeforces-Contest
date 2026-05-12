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
        int n,i,p=0;
        cin>>n;
        set<string> s1;
        string s;
        cin>>s;
        for(i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);

        }
        s1.insert(s);

        if(s1=="meow")
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

