#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int l, r;
        cin >> l >> r;

        int score = 0;
        for (int x = r; x > 0; x /= 2) {
            score++;
        }

        cout << score - 1 << endl;
    }
}
