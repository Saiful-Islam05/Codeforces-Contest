#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string str = "aaaaaa";
    bool all_same =all_of(str.begin() + 1, str.end(), [str](char c){return c == str.front();});
    cout <<boolalpha << all_same << '\n';
    return 0;

    return 0;
}







#include <iostream>
#include <algorithm>

int main() {
    std::string str = "aaaaaa";
    bool all_same = std::all_of(str.begin() + 1, str.end(), [str](char c){return c == str.front();});
    std::cout << std::boolalpha << all_same << '\n';
    return 0;
}

