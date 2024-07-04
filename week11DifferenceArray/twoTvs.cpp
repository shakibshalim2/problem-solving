#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    map<int, int> events;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        events[l]++;
        events[r + 1]--;
    }

    int sum = 0;
    bool ok = true;
    for (auto& [idx, value] : events) {
        sum += value;
        if (sum > 2) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << '\n';
}
