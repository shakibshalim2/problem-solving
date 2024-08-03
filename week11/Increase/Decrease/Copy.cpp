#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n + 1);

        unordered_map<int, int> freq_a;
        unordered_map<int, int> freq_b;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq_a[a[i]]++;
        }

        for (int i = 0; i < n + 1; ++i) {
            cin >> b[i];
            freq_b[b[i]]++;
        }

        int extra_element;
        for (const auto &entry : freq_b) {
            if (freq_a[entry.first] != entry.second) {
                extra_element = entry.first;
                break;
            }
        }

        long long sum_a = 0, sum_b = 0;
        for (int i = 0; i < n; ++i) {
            sum_a += a[i];
        }
        for (int i = 0; i < n + 1; ++i) {
            sum_b += b[i];
        }

        long long total_diff = abs(sum_b - sum_a);
        long long operations = total_diff;

        cout << operations + 1 << endl;
    }
}
