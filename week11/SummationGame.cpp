#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<int> remaining;
        for (int i = k; i < n; i++) {
            remaining.push_back(a[i]);
        }

        int sum = 0;
        for (int val : remaining) {
            sum += val;
        }

        sort(remaining.begin(), remaining.end(), greater<int>());
        for (int i = 0; i < min(x, (int)remaining.size()); i++) {
            sum -= 2 * remaining[i];
        }

        cout << sum << "\n";
    }

    return 0;
}
