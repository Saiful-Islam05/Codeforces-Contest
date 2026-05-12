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
        int len=0,halflen=0;
        string s,s1;
        cin>>s;
        char c[55];
        len=s.length();
        halflen=len/2;
        vector<char> v,v1,v2,v3;
        if(len%2==1)
        {
            for(int i=0;i<halflen;i++)
            {
                v.push_back(s[i]);
            }
            reverse(v.begin(),v.end());
            v.push_back(s[halflen]);
            for(int i=halflen+1;i<len;i++)
            {
                v1.push_back(s[i]);
            }

            reverse(v1.begin(),v1.end());

           v.insert(v.end(), v1.begin(), v1.end());

            v2=v;
            reverse(v2.begin(),v2.end());


            for(int i=0;i<len;i++)
            {
                v3.push_back(s[i]);
            }

            if(v==v2&&v!=v3)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }

        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

