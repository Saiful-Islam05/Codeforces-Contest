#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int x, k;
        cin >> x >> k;

        vector<int> v;
        if (x % k != 0)
        {
            cout << 1 << endl
                 << x << endl;
        }
        else
        {
            int quotient = x / k;
            cout << quotient << endl;
            for (int i = 0; i < quotient; i++)
            {
                v.push_back(k);
            }

            for (auto u : v)
            {
                cout << u << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
