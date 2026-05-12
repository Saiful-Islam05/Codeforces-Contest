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
        int Size=0;
        string s;
        cin>>s;
        bool all_same =all_of(s.begin() + 1, s.end(), [s](char c){return c == s.front();});
        if(all_same)
        {
            cout<<-1<<endl;
        }
        else
        {
            s.erase(0, 1);
            cout<<s.size()<<endl;
        }

    }
    return 0;
}

