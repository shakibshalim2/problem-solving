#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        int totalXOR = 0;
        for (int i = 0; i < n; ++i) {
            totalXOR ^= a[i];
        }

        if (totalXOR == 0) {
            cout << 1 << endl;
            cout << 1 << " " << n << endl;
            continue;
        }

        vector<int> prefixXOR(n);
        prefixXOR[0] = a[0];
        for (int i = 1; i < n; ++i) {
            prefixXOR[i] = prefixXOR[i - 1] ^ a[i];
        }

        int l1 = -1, l2 = -1;
        for (int i = 0; i < n - 1; ++i) {
            if (prefixXOR[i] == totalXOR) {
                l1 = i + 1;
                break;
            }
        }

        if (l1 != -1) {
            for (int i = l1; i < n - 1; ++i) {
                if (prefixXOR[i] == 0) {
                    l2 = i + 1;
                    break;
                }
            }
        }

        if (l1 != -1 && l2 != -1) {
            cout << 3 << endl;
            cout << 1 << " " << l1 << endl;
            cout << l1 + 1 << " " << l2 << endl;
            cout << l2 + 1 << " " << n << endl;
        } else {
            cout << 2 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << n << " " << n << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
