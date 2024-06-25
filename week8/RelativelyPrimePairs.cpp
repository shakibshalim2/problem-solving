#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long p, s;
    cin >> p >> s;
    cout << "YES" << endl;

    for (long long i = p; i <= s; i += 2) {
        cout << i << ' ' << i + 1 << endl;
    }
}
