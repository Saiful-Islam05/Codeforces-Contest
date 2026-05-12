#include <iostream>
#include <string>

using namespace std;

int countExtremelyRoundIntegers(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        string numStr = to_string(i);
        bool isExtremelyRound = true;

        for (char c : numStr) {
            if (c != '0' && c != '1') {
                isExtremelyRound = false;
                break;
            }
        }

        if (isExtremelyRound) {
            count++;
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int result = countExtremelyRoundIntegers(n);
        cout << result << endl;
    }

    return 0;
}

