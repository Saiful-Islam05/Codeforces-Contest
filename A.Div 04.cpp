#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n;
    cin>>n;
    while(n--)
    {
        int cnt=0;
        string s,s1="codeforces";
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=s1[i])
            {
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}

