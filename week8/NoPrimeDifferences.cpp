#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int p = 1; p <= t; p++) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i % 2 == 0)
                    cout << (n / 2 + i / 2) * m + j + 1 << ' ';
                else
                    cout << (i / 2) * m + j + 1 << ' ';
            }
            cout << '\n';
        }
    }
}
