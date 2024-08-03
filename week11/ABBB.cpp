#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> results(t);

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int len = 0;
        for (char c : s) {
            if (len > 0 && ((s[len - 1] == 'A' && c == 'B') || (s[len - 1] == 'B' && c == 'B'))) {
                --len;
            } 
            else {
                s[len++] = c;
            }
        }
        results[i] = len;
    }

    for (int result : results) {
        cout << result << endl;
    }
}
