#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, d;
        cin >> n >> k >> d;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> count;
        int unique_shows = 0;

        for (int i = 0; i < d; i++) {
            if (count[a[i]]++ == 0) {
                unique_shows++;
            }
        }

        int min_subscriptions = unique_shows;

        for (int i = d; i < n; i++) {
            if (--count[a[i - d]] == 0) {
                unique_shows--;
            }
            if (count[a[i]]++ == 0) {
                unique_shows++;
            }
            min_subscriptions = min(min_subscriptions, unique_shows);
        }

        cout << min_subscriptions << endl;
    }
}
