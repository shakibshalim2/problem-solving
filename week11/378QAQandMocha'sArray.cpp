#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        if (a[0] == 1) {
            cout << "Yes\n";
            continue;
        }

        bool beautiful = false;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int gcd_all = gcd(a[i], a[j]);
                if (gcd_all == 1) {
                    beautiful = true;
                    break;
                }
            }
            if (beautiful) break;
        }

        if (beautiful) {
            cout << "No\n";
        }
         else {
            cout << "Yes\n";
        }
    }
}