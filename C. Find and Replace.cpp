#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        bool odd1=false;
        bool odd2= false;
        int n;
        set<int> s1;
        cin>>n;
        string s;
        cin>>s;
        int len = s.length();
        if(len==1)
        {
            cout<<"YES"<<endl;
        }
        else if(len>1)
        {
            for(int i=1; i<=len; i++)
            {
                s1.insert(s[i]);

            }
            if(s1.size()==len)
            {
                cout<<"YES"<<endl;
            }
        }

        else
        {
            int i=1;
            while(i<=len)
            {
                int r=s[i];
                int cnt=i;
                if(cnt%2==1)
                {
                    odd1=true;
                }
                else
                {
                    odd1=false;
                }
                for(int i=1; i<len; i++)
                {
                    if(s[i]==r)
                    {
                        if(i%2==1)
                        {
                           odd2==true;
                           if(odd1==true && odd2==true)
                           {
                               continue;
                           }
                        }
                        else
                        {
                            odd2==false;
                            cout<<"NO"<<endl;
                            break;
                        }

                    }
                }

                i++;
            }

            cout<<"YES"<<endl;
        }
    }
    return 0;
}

